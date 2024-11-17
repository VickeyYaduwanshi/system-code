#include<iostream>
#define size 5
using namespace std;

int stack[size];
int top = -1;

void push(int x){
if (top == size-1){
cout<<"stack is full";
   }
   else if(top==-1){
    top = 0;
   stack[top]=x;
   }
   else{
    top++;
    stack[top]=x;

   }
}


void pop(){
if(top == -1){
   cout<<"stack is empty ";
   }
else {
   cout<<"\npoped element is : "<<stack[top];
   top--;
  }
}



void display(){
   if(top == -1 ){
      cout<<"stack is empty";
   }
   else{
      cout<<"\nstack elements  is : ";
      for(int i=top; i>=0; i--){
         cout<<stack[i]<<"  ";
      }
   }
}

int main(){
    push(10);
    push(20);
    push(30);
    push(40);
     display();
     pop();
     display();
}


















