
#include <iostream>
using namespace std;
int main()
{

   long long N;

   cin>>N;
 long long x= N % 10 ;
 while(N >=10){
      N=N/10;
 }

  long long M;

   cin>>M;
 long long y= M % 10 ;
 while(M >=10){
      M=M/10;
 }

 cout<<x+y<<endl;

  return 0;
}
