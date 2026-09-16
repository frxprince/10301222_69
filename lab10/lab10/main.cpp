#include <iostream>
#include <stack>
using namespace std;

int main()
{   stack<int> S1;
    stack<string>S2;
    S1.push(1); S1.push(2);S1.push(3);S1.pop();cout<<S1.top()<<endl;
    S2.push("Hello");S2.push("MJU");S2.pop();cout<<S2.top()<<endl;
    S2.push("H");S2.push("E");S2.push("L");S2.push("L");S2.push("O");
    while(S2.empty()!=1){
        cout<<S2.top()<<endl;  S2.pop();
    }


    return 0;
}
