#include <iostream>

using namespace std;

int S[10];
int top= -1;

void push(int data){
    if(top<  (int)(sizeof(S)/sizeof(S[0])-1)){
        top++; // top = top +1
        S[top]=data;
    }else{ cout<<"Stack overflow"<<endl;}

}
int pop(){
    int data;
    if(top>-1){
        data=S[top];
        top--;
        return data;
    }else{ return -1;}
}
int peak(){ return S[top];}
int main()
{
    push(1);push(2);push(3);push(4);
    pop();push(5);pop();pop();
    cout<< peak()<<endl ;
    return 0;
}
