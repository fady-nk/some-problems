#include <iostream>
using namespace std;
int main()
{
int n,p=0,neg=0,e=0,o=0;
int x=0;
int y=0;
cin>>n;
if(n>=1 && n<=1000){
while(n>=1){

            cin>>x;
            if(x%2==0) {
               e++;
            }
            else if(x%2!=0){
               o++;
            }
            if(x>0){
                p++;
            }
            else if(x<0){
              neg++;
            }


y+=n;
n--;
}
cout<<"Even: "<<e<<endl;
cout<<"Odd: "<<o<<endl;
cout<<"Positive: "<<p<<endl;
cout<<"Negative: "<<neg<<endl;

}
  return 0;
}
