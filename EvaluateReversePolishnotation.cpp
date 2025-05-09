#include<bits/stdc++.h>
using namespace std;
class Solution {
    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> s;
            for(int i=0;i<tokens.size();i++)
            {
                if(tokens[i]=="+")
                {
                    int r=s.top();
                    s.pop();
                    int l=s.top();
                    s.pop();
                    s.push(l+r);
                }
                else if(tokens[i]=="-")
                {
                     int r=s.top();
                    s.pop();
                    int l=s.top();
                    s.pop();
                    s.push(l-r);
                }
                else if(tokens[i]=="*")
                {
                     int r=s.top();
                    s.pop();
                    int l=s.top();
                    s.pop();
                    s.push(l*r);
                }
                else if(tokens[i]=="/")
                {
                     int r=s.top();
                    s.pop();
                    int l=s.top();
                    s.pop();
                    s.push(l/r);
                }
                else
                {
                    s.push(stoi(tokens[i]));
                }
            }
            return s.top();
        }
    };