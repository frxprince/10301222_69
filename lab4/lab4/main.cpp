#include <iostream>

using namespace std;
int addnumber(int i, int j);
void printmessage(string S);

void swap(int *i, int *j){
    int temp=*i;
    *i=*j;
    *j=temp;
}


int main()
{  int a=1234,f=123,g=987;
    int *b;
    int **c;
    long long *d, e;
    char A[100];
    b=&a;
    c=&b;
    swap(&f,&g);
    scanf("%s",A);

    cout<< f << "   "<< g <<A<<endl;
  //  cout<< addnumber(1,5)<<endl;
  //  cout<<a<<"  "<<b<<"  "<<&b <<"  "<< c<<endl;
  //  cout<< sizeof(d)<<"  "<< sizeof(e)<<endl;
    return 0;
}

int addnumber(int i, int j){
    return i+j;
}
void printmessage(string S){
    cout<<"the message is "<<S<<endl;
}
