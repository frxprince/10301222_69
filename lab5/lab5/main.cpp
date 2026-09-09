#include <iostream>

using namespace std;

 template <typename T, typename T2> T  addAB(T a,T2 b){
    return a+b;
}

 void PrintArray(int B[],int k){
     for(int i=0;i < k;i++){
         cout<< B[i] <<"," ;
     }
 }
 void PrintArray2(int* B,int k){
     for(int i=0;i < k;i++){
         cout<< B[i] <<"," ;
     }
 }
int main()
{
//    cout << (int)addAB<char,char>(-5,1) << endl;
// cout << (int)addAB<unsigned char,char>(127,1) << endl;
int A[]={1,2,3,4,5,6,7,8,9,10};
PrintArray2(A, (sizeof(A)/sizeof(A[0])));
//for(int i=0;i < (sizeof(A)/sizeof(A[0]));i++){
//    cout<< A[i] <<"," ;
//}

    return 0;
}
