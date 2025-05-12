#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool check = false;
    
    while(true)
    {
        string array;
        getline(cin,array,'.');
        if(array.length()==1) break;
        stack<char> s;
        bool isValid = true;
        for(auto c : array)
        {
            if(c=='('||c=='[') s.push(c);
            else if(c==')')
            {
                if(s.empty()||s.top()!='(')
                {
                    isValid = false;
                    break;
                }
                s.pop();
            }
            else if(c==']')
            {
                if(s.empty()||s.top()!='[')
                {
                    isValid = false;
                    break;
                }
                s.pop();
            }
        }
        if(!s.empty()) isValid = false;
        if(isValid) cout << "yes" << "\n";
        else cout << "no" << "\n";
    }
        
    
}