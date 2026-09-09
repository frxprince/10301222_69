#include <iostream>
#include <chrono>

using namespace std;
using namespace std::chrono;
const unsigned int n=100;
double X[n][n]={0};

int main()
{   auto start=high_resolution_clock::now();
    double k=0;
  //  X[0][0]=1;X[0][1]=2;X[0][2]=3;
 //   X[1][0]=4;X[1][1]=5;X[1][2]=6;
 //   X[2][0]=7;X[2][1]=8;X[2][2]=9;
    for(int k=0;k<20;k++)
    for(unsigned int r=0;r<n;r++){
        for(unsigned int c=0;c<n;c++){
           // cout<<X[r][c]<< " ";
            k=k+X[c][r];
        }
     //   cout<<endl;
    }
    auto stop=high_resolution_clock::now();
    auto duration=duration_cast<microseconds>(stop-start);
    cout<<k<<"  "<< duration.count()<<" microsecond"<<endl;
    return 0;
}
