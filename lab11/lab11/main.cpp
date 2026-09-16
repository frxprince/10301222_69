#include <iostream>
#include<stack>
#include<windows.h>


using namespace std;

int main()
{   HANDLE hconsole=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hconsole,0x04);
    cout<<"Hello World"<<endl;
 SetConsoleTextAttribute(hconsole,0x00);
    stack<char>S;
    string input="1+2+3*((5+8*(1/2)))+5)))))";
    cout << input << endl;
    for(int i=0;i<(int)input.length();i++){
        switch(input[i]){
        case '(':
            S.push('(');
            break;
        case ')':
            if(S.empty()){
             SetConsoleTextAttribute(hconsole,0x04);cout<<")"<<endl;
              SetConsoleTextAttribute(hconsole,0x0);
                return 0;
            } S.pop();
        }cout<<input[i];
    }
    if(!S.empty()){
         SetConsoleTextAttribute(hconsole,0x04);
        cout<<" missing )"<<endl;
    }
        return 0;
}
