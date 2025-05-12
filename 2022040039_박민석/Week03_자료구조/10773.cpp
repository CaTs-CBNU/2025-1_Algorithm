#include <iostream>
#include <string>
using namespace std;

class Math
{
    int array[100001];
    int top = 0;
    public :
    
    void push(int num)
    {
        array[top++] = num;
    }
    void pop()
    {
        array[--top];
    }
    int getInt()
    {
        int sum = 0;
        if(top<=0)
        {
            return 0;
        }
        else
        {
            for(int i=0;i<top;i++)
            {
                sum+=array[i];
            }
            return sum;
        }
    }
};

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int n;
    cin >> n;
    cin.ignore();
    Math stack;
    int num;
    for(int i=0;i<n;i++)
    {
        cin >> num;
        if(num==0)
        {
            stack.pop();
        }
        else
        {
            stack.push(num);
        }
    }
    cout << stack.getInt();
    return 0;
}