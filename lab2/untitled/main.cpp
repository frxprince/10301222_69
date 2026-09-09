#include <iostream>
#include <cstring>
using namespace std;

int main()            // .cstr     .toByteArry()
{
    char A[10]; char B[10]; char C[]="Hello World"; //c string ,cstr
    string D;   // string object
    A[0]='h';
    A[1]='e';
    A[2]='l';
    A[3]='l';
    A[4]='o';
    A[5]=0;
    strcpy(B,"hello");
     strcat(B,"MJU");
    D="Hello";
     D=D+"World";
    cout<<A<<"   "<<B<<"  "<<C<<sizeof(C)<<"  "<<D<<endl;
    return 0;
}
