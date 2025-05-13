#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Q{
    int *p;
    int top;
    public:
    Q();
    ~Q(){delete[]p;}
    void push();
    void pop();
    void getSize();
    void front();
    void back();
    void setOder(string oder);
    void start();
};

Q::Q(){
    p=new int[10000];
    top=-1;
}

void Q::push(){
    int n;
    cin>>n;
    top++;
    p[top]=n;
}

void Q::pop(){
    if(top==-1){
        cout<<-1<<"\n";
    }
    else{
         int *n=&p[1];
         cout<<p[0]<<"\n";
         p=n;
         top--;
    }
}

void Q::getSize(){
    cout<<top+1<<"\n";
}

void Q::front(){
    if(top==-1){
        cout<<-1<<"\n";
    }
    else{
       cout<<p[0]<<"\n";
    }
}

void Q::back(){
    if(top==-1){
        cout<<-1<<"\n";
    }
    else{
          cout<<p[top]<<"\n";
    }
}

void Q::setOder(string oder){
      if(oder=="push"){push();}
      else if(oder=="pop"){pop();}
      else if(oder=="size"){getSize();}
      else if(oder=="empty"){
        if(top==-1) cout<<1<<"\n";
        else cout<<0<<"\n";
      }
      else if(oder=="front"){front();}
      else if(oder=="back"){back();}
}

void Q::start(){
    int n;
    cin>>n;
    string oder;
    for(int i=0;i<n;i++){
         cin>>oder;
         setOder(oder);
    }
}

int main(){
    Q a;
    a.start();
}