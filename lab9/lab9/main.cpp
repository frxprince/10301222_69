#include <iostream>

using namespace std;

typedef struct stackinfo{
    int stacksize;
    int top;
    int *data;
}stackinfo;

stackinfo * createStack(int maxElements){
    stackinfo *S;
    S=(stackinfo *)malloc(sizeof(stackinfo));
    S->data=(int *)malloc(sizeof(int)*maxElements);
    S->top=0;
    S->stacksize=maxElements;
    return S;
}

void push(stackinfo *S,int data){
    if(S->top ==S->stacksize){cout<<"stack overflow"<<endl;}else{
        S->data[S->top]=data; S->top++;
    }
}
int peak(stackinfo *S){
    if(S->top==0){ cout<<"stack empty"<<endl; return(-1);}return S->data[S->top-1];
}
int pop(stackinfo *S){
    int data;
    if(S->top==0){cout<<"Stack empty"<<endl;return -1;}else{
        data=peak(S); S->top--;
    }return data;
}
int main()
{   stackinfo *S1=createStack(10); stackinfo *S2=createStack(5);
    push(S1,1);push(S1,2);push(S1,3); pop(S1);cout<<peak(S1)<<endl;
    push(S2,1);push(S2,2);push(S2,3); pop(S2);pop(S2);cout<<peak(S2)<<endl;
    cout << "Hello World!" << endl;
    return 0;
}
