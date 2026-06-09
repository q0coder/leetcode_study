#include<iostream>
using namespace std;
template<typename T>
struct Allocator
{

	T* allocate(size_t size)
	{
		return (T*)malloc(sizeof(T) * size);
	}
	void delallocate(void* p)
	{
		free(p);
	}
	void construct(T* p, const T& val)
	{
		new(p) T(val);
	}
	void destory(T* p)
	{
		p->~T();
	}

};

template<typename T,typename Alloc=Allocator<T>>
class vector
{
public:
	vector(int size = 10)
	{
		_first = _allocator.allocate(size);
		_last = _first;
		_end = _first + size;
	}

	~vector()
	{
			for(T* p=_first;p!=_last;++p)
			{
				_allocator.destory(p);
			}
			_allocator.delallocate(_first);
			_first =_last=_end= nullptr;
	}
	vector(const vector<T>& rhs )//拷贝构造函数（深拷贝）
	{
		int size = rhs._end - rhs._first;
		_first = _allocator.allocate(size);
		int len = rhs._last - rhs._first;
		for (int i = 0; i < len; ++i)
		{
			_allocator.construct(_first + i, rhs._frist[i]);
		}
		_last = _first + len;
		_end = _first + size;
	}
	vector<T>& operator=(const vector<T>& rhs)//赋值重载函数
	{
		if (this == &rhs)
			return *this;

		for (T* p = _first; p != _last; ++p)
		{
			_allocator.destory(p);
		}
		_allocator.delallocate(_first);
		int size = rhs._end - rhs._first;
		_first = _allocator.allocate(size);
		int len = rhs._last - rhs._first;
		for (int i = 0; i < len; ++i)
		{
			_allocator.construct(_first + i, rhs._frist[i]);
		}
		_last = _first + len;
		_end = _first + size;
	}

public:
	void push_back(T val)//尾插
	{
		if (full())
		{
			expand();
		}
		_allocator.construct(_last, val);
		_last++;
	}

	void pop_back()//尾删
	{
		if (empty())
		{
			return;
		}
		--_last;
		_allocator.destory(_last);
	}

	T back()const//返回末尾元素
	{
		return *(_last - 1);
	}
	bool full()const { return _last == _end; }//判满
	bool empty()const { return _last == _first; }//判空
	bool size()const { return _last - _first; }//返回元素个数

private:
	void expand()//扩容
	{
		int size = _end - _first;
		T* p = _allocator.allocate(size);

		for (int i = 0; i < size; ++i)
		{
			_allocator.construct(p + i,_frist[i]);

		}
		for (T* p = _first; p != _last; ++p)
		{
			_allocator.destory(p);
		}
		_allocator.delallocate(_first);
		_first = p;
		_last =_first+ size;
		_end = _last + size;

	}

private:
	T* _first;//指向数组元素的起始位置
	T* _last;//指向数组有效元素的后继
	T* _end;//指向数组空间的后继
	Allocator _allocator;//容器空间配置器
};

int main()
{
	
}