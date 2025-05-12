#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    bool check = false;
    string array;
    cin >> n;
    
    for(int i=0;i<n;i++)
    {
        cin >> array;
        if(array.length()>=2 && array.length()<=50)
        {
            for(int i=0;i<array.length();i++)
            {
                if(array[i]=='(')
                {
                    for(int j=i+1;j<array.length();j++)
                    {
                        if(array[j]==')')
                        {
                            array[i]=0;
                            array[j]=0;
                            break;
                        }
                        
                    }
                }
            }
            if(array.rfind('(')!=-1||array.rfind(')')!=-1)
            {
                cout << "NO" << "\n";
            }
            else
            {
                cout << "YES" << "\n";
            }
        }
        else
        {
            cout << "NO" << "\n";
        }
        array="0";
    }
}