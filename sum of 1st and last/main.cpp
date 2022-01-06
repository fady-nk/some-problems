#include <iostream>
using namespace std;

int main() {

int t,n=0,num2=0,sum=0;
cin>>t;

for(int i=0;i<t;i++){
    cin>>n;
 num2=n%10;
 while(n>=10){
    n=n/10;
 }
 sum=n+num2;
 cout<<sum<<endl;
}

  return 0;
}
