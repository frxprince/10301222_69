#include <iostream>
#include<cstring>
using namespace std;

typedef struct Node{
    char Name[20];
    unsigned int phone;
    struct Node *next;
}PhoneBook;

    PhoneBook *head=0,*tail=0,*pt=0,*pt1=0,*pt2=0;
void add(string name,unsigned int phone){
    if(head==0){
        head=(PhoneBook *) malloc(sizeof(PhoneBook));
        strcpy(head->Name,name.c_str());head->phone=phone;
        head->next=0; tail=head;
    }else{
        pt=(PhoneBook *)malloc(sizeof(PhoneBook));
        strcpy(pt->Name,name.c_str());pt->phone=phone;
        pt->next=0;tail=pt;
    }
}

int main()
{
    add("John",1234); add("Marry",5678);add("Peter",5555);

    cout<<"hello"<<endl;
//    Node A[5];
//    strcpy(A[0].Name,"Peter"); A[0].phone=55555;
//    strcpy(A[1].Name,"John"); A[1].phone=55551;
//    strcpy(A[2].Name,"Jane"); A[2].phone=55552;


   // for(int i=0;i<4;i++)printf("%s ,%d \n",A[i].Name,A[i].phone);

  //  cout << "Hello World!"<< sizeof(A[0].next) << endl;
    return 0;
}
