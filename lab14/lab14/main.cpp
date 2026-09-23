#include <iostream>
#include<vector>
using namespace std;

void add(vector<int>& queue,int value){
    queue.push_back(value);
}
int remove(vector<int>& queue){
    int tmp=-1;
    if(!queue.empty()){
        tmp=queue[0];
        queue.erase(queue.begin());
    }
    return tmp;
}
int peek(vector<int>& queue){
    int tmp=-1;
    if(!queue.empty()){
        tmp=queue[0];
    }
    return tmp;
}

int main()
{   vector<int>Q;
    add(Q,10); add(Q,20); add(Q,30); add(Q,40); add(Q,50);
    cout << remove(Q) << endl;
      cout << remove(Q) << endl;
      cout << remove(Q) << endl;
        cout << remove(Q) << endl;
        cout << remove(Q) << endl;  cout << remove(Q) << endl;
    return 0;
}
