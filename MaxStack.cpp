#include<bits/stdc++.h>
using namespace std;
class MaxStack {

    public:
        stack<int> st;
        stack<int> maxs;
        MaxStack() {
           
        }
        
        void push(int val) {
            st.push(val);
            if(maxs.empty() || val>=maxs.top())
            maxs.push(val);
        }
        
        void pop() {
            if(st.top() == maxs.top())
            {
                maxs.pop();
            }
            
            st.pop();
            
        }
        
        int top() {
            return st.top();
        }
        
        int getMax() {
            return maxs.top();
        }
    };
    
    /**
     * Your MinStack object will be instantiated and called as such:
     * MinStack* obj = new MinStack();
     * obj->push(val);
     * obj->pop();
     * int param_3 = obj->top();
     * int param_4 = obj->getMin();
     */