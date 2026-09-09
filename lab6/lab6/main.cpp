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
        pt->next=0;tail->next=pt;tail=pt;
    }
}

void list(){
    if(head==0){cout<<"no data"<<endl;return;}
    pt=head;
    while(pt->next !=0){
        printf("node address:%p name=%s phone=%d next=%p\n",pt,pt->Name,pt->phone,pt->next);
        pt=pt->next;
    }printf("node address:%p name=%s phone=%d next=%p\n",pt,pt->Name,pt->phone,pt->next);
}

void destroy(){
    pt=head;
    while(pt->next !=0){
        free(pt);pt=pt->next;
    }free(pt);head=0;tail=0;
}

void insert_node(string name,unsigned int phone,string position){
    PhoneBook *left_pt=head;
    pt=head;
    while(pt->next!=0){

        if(strcmp(pt->Name,position.c_str())==0)break;
        left_pt=pt;
        pt=pt->next;
    }
    pt2 =(PhoneBook *) malloc(sizeof(PhoneBook));
    strcpy(pt2->Name,name.c_str());
    pt2->phone=phone;
    pt2->next=pt;
    left_pt->next=pt2;
}

void delete_node(string position){
    PhoneBook *left_pt=head;
    pt=head;
    while(pt->next!=0){
        if(strcmp(pt->Name,position.c_str())==0)break;
        left_pt=pt;
        pt=pt->next;
    }
    left_pt->next=pt->next;
    free(pt);
}


int main()
{
    add("John",1234);
    add("Marry",5678);
    add("Peter",5555);
    add("Jack",666);
    insert_node("XXX",5111,"Peter");
   delete_node("Jack");
    list();
    destroy();
    list();
    cout<<"hello"<<endl;
//    Node A[5];
//    strcpy(A[0].Name,"Peter"); A[0].phone=55555;
//    strcpy(A[1].Name,"John"); A[1].phone=55551;
//    strcpy(A[2].Name,"Jane"); A[2].phone=55552;


   // for(int i=0;i<4;i++)printf("%s ,%d \n",A[i].Name,A[i].phone);

  //  cout << "Hello World!"<< sizeof(A[0].next) << endl;
    return 0;
}
