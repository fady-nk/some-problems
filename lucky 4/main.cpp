#include <iostream>

using namespace std;

int main()
{

int n,x=0,y=0,sum=0,r=0;
cin>>n;

for(int i=0;i<n;i++){
        cin>>x;
y=0,sum=0,r=0;
while(x>0){
    y=x%10;
    sum=y;
    x=x/10;
    if(sum==4)
        r++;
}
cout<<r<<endl;

}
    return 0;
}
