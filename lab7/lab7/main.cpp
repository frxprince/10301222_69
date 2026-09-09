#include <iostream>
#include <forward_list>
#include <list>
#include <string>

using namespace std;

struct Node{
    string Name;
    unsigned int phone;
};

int main()
{
    list<Node> fwd;

     fwd.push_back({"John",1234});
      fwd.push_back({"John1",12345});
       fwd.push_back({"John2",12346});
        fwd.push_back({"John3",12347});
       fwd.remove_if([&](const Node& c){return c.Name=="John2";});


    for(const Node& c:fwd)cout<<c.Name<< "  "<< c.phone<<endl;

    cout << "Hello World!" << endl;
    return 0;
}
