#include <stdio.h>
#include <string.h>

int top = -1;

int stack[100000];

void push(int num){
    top++;
    stack[top] = num;
}

int pop(){
    int num;
    num = stack[top];
    top--;
    return num;
}


int main(){
   int N,num,answer;
   char Oder[10];
   scanf("%d",&N);
   for(int i=0 ; i < N ; i++){
       scanf("%s",&Oder);
       if(strcmp(Oder,"push")==0){
           scanf("%d\n",&num);
           push(num);
           
       }
       if(strcmp(Oder,"pop")==0){
            if(top==-1){
               printf("%d\n",top);
           }
           else{
           answer = pop(); 
           printf("%d\n",answer);
           }
       }
       if(strcmp(Oder,"size")==0)
           printf("%d\n",top+1);
       if(strcmp(Oder,"empty")==0)
           if(top==-1){
               printf("1\n");
           }
           else printf("0\n");
       if(strcmp(Oder,"top")==0){
           if(top==-1){
               printf("-1\n");
           }
           else printf("%d\n",stack[top]);
       }
   }
}