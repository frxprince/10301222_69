#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> number;
    number.push_back(10); number.push_back(20); number.push_back(30); number.push_back(40);
    number.push_back(10); number.push_back(20); number.push_back(30); number.push_back(40);
     number.push_back(44);number.push_back(44);
     number.push_back(10); number.push_back(20); number.push_back(30); number.push_back(40);
     number.push_back(10); number.push_back(20); number.push_back(30);

    cout << number[2] << endl;
    for(int k: number)cout<< k <<",";cout<<endl;
    number.insert(number.begin()+3,99);
    for(int k: number)cout<< k <<","; cout<<endl;
    number.erase(number.begin()+1);
      for(int k: number)cout<< k <<","; cout<<endl;
      cout<<"Size:"<<number.size()<<endl;
        cout<<"Capacity:"<<number.capacity()<<endl;
      number.clear(); number.shrink_to_fit();
        for(int k: number)cout<< k <<","; cout<<endl;
        cout<<"Size:"<<number.size()<<endl;
        cout<<"Capacity:"<<number.capacity()<<endl;

    return 0;
}
