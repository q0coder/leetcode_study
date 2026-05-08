#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


class BigInt
{
public:
	BigInt(string str):strDigit(str){}
private:
	string strDigit;
	friend ostream& operator<<(ostream& out, const BigInt& src);
	friend BigInt operator+(const BigInt& lrc, const BigInt& src);
	friend BigInt operator-(const BigInt& lrc, const BigInt& src);
};
ostream& operator<<(ostream& out, const BigInt& src)
{
	out << src.strDigit << endl;
	return out;
}
BigInt operator+(const BigInt& lrc, const BigInt& src)
{
	string result="";//定义的所有变量最好都初始化一下，字符串可以初始化为空
	bool flag = false;//用于进位标识
	int i = lrc.strDigit.size() - 1;
	int j = src.strDigit.size() - 1;
	string slrc = lrc.strDigit;
	string ssrc = src.strDigit;

	//统一处理同正与同负的情况
	if ((lrc.strDigit[0] != '-'&&src.strDigit[0]!='-')|| (lrc.strDigit[0] == '-' && src.strDigit[0] == '-'))
	{
		if (lrc.strDigit[0] == '-' && src.strDigit[0] == '-')
		{
			
			slrc.erase(slrc.begin());
			ssrc.erase(ssrc.begin());
		}
		for (; i >= 0 && j >= 0; --i, --j)
		{
			int ret = slrc[i] - '0' + ssrc[j] - '0';//利用字符的ASCII值
			if (flag)
			{
				ret += 1;
				flag = false;
			}
			if (ret >= 10)
			{
				ret %= 10;
				flag = true;
			}
			result += to_string(ret);//ret为整数，需要转化为字符
		}
		//处理多出来的位
		if (i > j)
		{
			for (; i >= 0; --i)
			{
				int ret = slrc[i]-'0';
				if (flag)
				{
					ret += 1;
					flag = false;
				}
				if (ret >= 10)
				{
					ret %= 10;
					flag = true;
				}
				result += to_string(ret);
			}
		}
		else if(i<j)
		{
			for (; j >= 0; --j)
			{
				int ret = ssrc[j]-'0';
				if (flag)
				{
					ret += 1;
					flag = false;
				}
				if (ret >= 10)
				{
					ret %= 10;
					flag = true;
				}
				result += to_string(ret);
			}
		}
		//如果是两个负数，在前面加上负号
		if (lrc.strDigit[0] == '-' && src.strDigit[0] == '-')
		{
			result += "-";
		}
		reverse(result.begin(), result.end());//由于result中数字顺序是反的，颠倒
		return BigInt(result);
	}
	//处理一方为负数的情况
	else if (lrc.strDigit[0] == '-')
	{
		string lrcCopy = lrc.strDigit;
		lrcCopy.erase(lrcCopy.begin());
		return operator-(src, BigInt(lrcCopy));
	}
	else if (src.strDigit[0] == '-')
	{
		string lrcCopy = src.strDigit;
		lrcCopy.erase(lrcCopy.begin());
		return operator-(lrc, BigInt(src));
	}
	
}

BigInt operator-(const BigInt& lrc, const BigInt& src)
{
	string result = "";
	string max=lrc.strDigit;
	string min=src.strDigit;
	bool flag = false;
	bool minor = true;//记录最后的结果是正是负
	int i = lrc.strDigit.size() - 1;
	int j = src.strDigit.size() - 1;

	
	
	if ((lrc.strDigit[0] != '-' && src.strDigit[0] != '-') || (lrc.strDigit[0] == '-' && src.strDigit[0] == '-'))
	{
		//找出最大，最小，永远使用最大减最小
		if (i < j)
		{
			max = src.strDigit;
			min = lrc.strDigit;
			swap(i, j);

			minor = false;
		}
		else if (i == j)
		{
			if (lrc.strDigit < src.strDigit)
			{
				max = src.strDigit;
				min = lrc.strDigit;
				swap(i, j);
				minor = false;

			}
			else if(lrc.strDigit==src.strDigit)
			{
				return BigInt("0");
			}
		}
		if (max[0] == '-' && min[0] == '-')
		{
			max.erase(max.begin());
			min.erase(min.begin());
		}
		for (; i >= 0 && j >= 0; --i, --j)
		{
			int ret = (max[i] - '0') - (min[j] -'0');
			if (flag)
			{
				ret -= 1;
				flag = false;
			}
			if (ret < 0)
			{
				ret=-ret;
				flag = true;
			}
			result += to_string(ret);
		}
		if (i > j)
		{
			for (; i >= 0; --i)
			{
				int ret = lrc.strDigit[i]-'0';
				if (flag)
				{
					ret -= 1;
					flag = false;
				}
				if (ret < 0)
				{
					ret =-ret;
					flag = true;
				}
				result += to_string(ret);
			}
		}
		else if(i<j)
		{
			for (; j >= 0; --j)
			{
				int ret = src.strDigit[j]-'0';
				if (flag)
				{
					ret -= 1;
					flag = false;
				}
				if (ret < 0)
				{
					ret = -ret;
					flag = true;
				}
				result += to_string(ret);
			}
		}
		if (lrc.strDigit[0] == '-' && src.strDigit[0] == '-')
		{
			minor = !minor;
		}
		if (!minor)
		{
			result += '-';
		}
		reverse(result.begin(), result.end());
		return BigInt(result);
	}
	//处理一方为负数的情况
	else if (lrc.strDigit[0] == '-')
	{
		string lrcCopy = lrc.strDigit;
		lrcCopy.insert(lrcCopy.begin(),'-');
		return operator+(src, BigInt(lrcCopy));
	}
	else if (src.strDigit[0] == '-')
	{
		string lrcCopy = src.strDigit;
		lrcCopy.erase(lrcCopy.begin());
		return operator+(lrc, BigInt(src));
	}
}

int main()
{
	BigInt i1("-1111111111111111111111111111111111");
	BigInt i2("9999999999999999999999999999");
	cout << (i1 + i2) << endl;
	
}