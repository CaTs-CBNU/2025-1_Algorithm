#include <iostream>
#include <string>

using namespace std;

int main()
{
    string input;
    string sub;
    string explode;

    getline(cin,input);
    getline(cin,explode);
    while(true)
    {
        if(input.find(explode)!=-1)
        {
            sub = input.substr(0,input.find(explode));
            sub.append(input.substr(input.find(explode)+explode.length()));
            input = sub;
        }
        else
        {
            if(input.length()==0)
            {
                cout << "FRULA";
                break;
            }
            else
            {
                cout << input;
                break;
            }
        }

    }

}