#include <iostream>
#include <queue>
#include <deque>
using namespace std;

int main()
{
    queue<string>Q;
    Q.push("Hello");Q.push("World");Q.push("CS");Q.push("MJU");Q.push("555");
    cout<<Q.front()<<endl; Q.pop();
    cout<<Q.front()<<endl; Q.pop();
    cout<<Q.front()<<endl; Q.pop();
    cout<<Q.front()<<endl; Q.pop();
    deque<string>D;
    D.push_front("hello");D.push_back("world");D.push_front("cs");D.push_back("mju");
    cout<<D.back()<<"  "<<D.front()<<endl;
    D.pop_front();
  cout<<D.back()<<"  "<<D.front()<<endl;

    return 0;
}
