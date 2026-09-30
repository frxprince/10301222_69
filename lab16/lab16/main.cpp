#include<iostream>
#include<cstring>
#include<cmath>
#include<queue>
#include<stack>
using namespace std;
/*

1+2+3*4+5*6
less +
less *
greater +
less *

1 2 3 4 * + + 5 6 * +
45.000000
*/
queue<string>Q;
stack<string>S;
char Precedence[256];

void listQ( queue<string>Q){
    queue<string>q=Q;

    while(!q.empty()){
        cout<<q.front()<<",";
        q.pop();
    }
    cout<<endl;
}

int main(){

    string input,token,token_op;
    unsigned int i;
    Precedence['^']=3;
    Precedence['*']=2;Precedence['/']=2;
    Precedence['+']=1;Precedence['-']=1;

    input="(5*2)+(4+3*(5+6+7)-1)*10";

    for(i=0;i<input.length();i++)		{
        if((input[i]=='+') ||  (input[i]=='-') ||  (input[i]=='*') ||(input[i]=='/') ||(input[i]=='^') ||(input[i]=='(') ||(input[i]==')')){

            if(token.length()>0)Q.push(token);
            token_op=input[i];
            if((input[i]=='(' ) || (input[i]==')' ))
            {
                if(input[i]=='('){
                    S.push(token_op);
                }else{
                    while( S.top()[0]!='(')
                    {
                        Q.push(S.top());S.pop();
                    }
                    S.pop();
                }
            }else
            {
                if(S.empty())
                {
                    S.push(token_op);
                }else if(Precedence[S.top()[0]]<=Precedence[input[i]])
                { S.push(token_op);
                }else if(Precedence[S.top()[0]]==Precedence[input[i]]){
                    Q.push(S.top());S.pop();
                    S.push(token_op);
                }else if(Precedence[S.top()[0]]>Precedence[input[i]]){
                    while(Precedence[S.top()[0]]>=Precedence[input[i]])
                    {
                        Q.push(S.top());S.pop();
                        if(S.empty())break;
                    }
                    S.push(token_op);
                }
            }
            token="";
        }else{
            token=token+input[i];
        }
    }
    Q.push(token);
    while(!S.empty()){
        Q.push(S.top());S.pop();
    }
    cout<<"Infix:"<<input<<endl;
    cout<<"Postfix:";
    listQ(Q);

    //----------- eval ------------
    float a,b,c;
    while(!Q.empty()){
        if((Q.front()[0]=='+' )|| (Q.front()[0]=='-') || (Q.front()[0]=='*' )  || (Q.front()[0]=='/' )|| (Q.front()[0]=='^')){
            b=stof(S.top());S.pop();
            a=stof(S.top());S.pop();
            if(Q.front()[0]=='+')c=a+b;
            if(Q.front()[0]=='-')c=a-b;
            if(Q.front()[0]=='*')c=a*b;
            if(Q.front()[0]=='/')c=a/b;
            if(Q.front()[0]=='^')c=pow(a,b);

            S.push(to_string(c));
        }else{
            S.push(Q.front());
        }
        Q.pop();
    }
    cout<<"Evaluation result:"<<S.top()<<endl;
    S.pop();


    return 0;
}


