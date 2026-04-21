#include<iostream>
#include<vector>
using namespace std;

class MinStack {
    vector<int>st;
    vector<int>min_st;


public:
    MinStack()
    {

    }

    void push(int val) {
        st.push_back(val);
        if (min_st.empty() || val <= min_st.back())
        {
            min_st.push_back(val);
        }
        else
        {
            min_st.push_back(min_st.back());
        }

    }

    void pop() {
        if (st.empty())
            return;
        st.pop_back();
        min_st.pop_back();

    }

    int top() {
        return st.back();
    }

    int getMin() {
        return min_st.back();
    }
};


