#include <iostream>
using namespace std;

int main(){
    long long num1,num2;
    long long a,b,c;
  
    cin>>num1>>num2;
    a=num1;b=num2;
    if(num1<num2){
        a=num2;
        b=num1;
    }
    while(num2!=0){
        c=num1%num2;
        num1=num2;
        num2=c;
    }
    cout<<a*b/num1;
}