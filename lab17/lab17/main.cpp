#include <iostream>

using namespace std;

string Data[]={"a","b","c","d","e","f","g","h","i","j","k","l","m","n","o"};
int Left[]={1,3,5,7,9,11,13,-1,-1,-1,-1,-1,-1,-1,-1};
int Right[]={2,4,6,8,10,12,14,-1,-1,-1,-1,-1,-1,-1,-1};

void Pre(int p){
    if(p!=-1){
        cout<<Data[p]<<",";
        Pre(Left[p]); Pre(Right[p]);
    }
}
void Inord(int p){
    if(p!=-1){
        Inord(Left[p]);cout<<Data[p]<<","; Inord(Right[p]);
    }
}
void Postord(int p){
    if(p!=-1){
        Postord(Left[p]);Postord(Right[p]);cout<<Data[p]<<",";
    }
}

int main()
{
    cout<<"Preorder: "; Pre(0);
 cout<<"\nInorder: "; Inord(0);
  cout<<"\nPostorder: "; Inord(0);
    return 0;
}
