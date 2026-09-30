#include <iostream>
#include<vector>
using namespace std;

struct Node{
    string value;
    int LeftEdge; int RightEdge;
};
void Preord(vector<Node>& tree,int index){
    if(index == -1)return;
    cout<<tree[index].value<<",";
    Preord(tree,tree[index].LeftEdge);
    Preord(tree,tree[index].RightEdge);
}

void Inord(vector<Node>& tree,int index){
    if(index == -1)return;
    Inord(tree,tree[index].LeftEdge);
    cout<<tree[index].value<<",";
    Inord(tree,tree[index].RightEdge);
}

void Postord(vector<Node>& tree,int index){
    if(index == -1)return;
    Postord(tree,tree[index].LeftEdge);
    Postord(tree,tree[index].RightEdge);
 cout<<tree[index].value<<",";
}
int main()
{
    vector<Node>Tree={
{"A",1,2},{"B",3,4},{"C",5,6},{"D",7,8},{"E",9,10},{"F",11,12},{"G",13,14},
{"H",-1,-1},  {"I",-1,-1}, {"J",-1,-1}, {"K",-1,-1},{"L",-1,-1},
{"M",-1,-1}, {"N",-1,-1} , {"O",-1,-1}};
 cout<<"Preorder: ";Preord(Tree,0); cout<<"Inorder: ";Inord(Tree,0); cout<<"Postorder: ";Postord(Tree,0);
return 0;
}
