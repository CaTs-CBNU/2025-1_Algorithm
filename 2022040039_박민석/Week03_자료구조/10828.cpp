#include <iostream>
using namespace std;

class Math
{
    int array[100];
    int top = 0;
    int stack = 0;
    public :
    
    void push()
    {
        int num;
        cin >> num;
        array[top++] = num;
        stack++;
    }
    int pop()
    {
        if(top<=0)
        {
            return -1;
        }
        else 
        {
            stack--;
            return array[--top];
        }
    }
    int getStack(string order)
    {
        if(order=="size")
        {
            return stack;
        }
        else if(order=="empty")
        {
            if(stack<=0)
            {
                return 1;
            }
            else
            {
                return 0;
            }
        }
        else if(order=="top")
        {
            if (top<=0)
            {
                return -1;
            }
            else
            {
                return array[top-1];    
            }
        }
        else return -1;
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
    string order;
    for(int i=0;i<n;i++)
    {
        cin >> order;
        if(order=="push")
        {
            stack.push();
        }
        else if(order=="pop")
        {
            cout << stack.pop() << "\n"; 
        }
        else
        {
            cout << stack.getStack(order) << "\n";
        }
    }

}