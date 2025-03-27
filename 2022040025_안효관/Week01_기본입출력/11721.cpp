#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main(){
     string a;
     string d;
     int b=0,c;
     getline(cin,a);
     while(1){
          c=10;
          d=a.substr(b,c);
          if(d.length()<10){
              cout<<d;
              break;
          }
          cout<<d<<endl;
          b=b+10;
     }     
}