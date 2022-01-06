#include <bits/stdc++.h>

using namespace std;
void fastIO(){
ios_base::sync_with_stdio(false);
cin.tie(NULL);
}
int main(){
 fastIO();
int number,z=0,divisors=0,sum=0,j=0;
cin>>number;
if(number>=1 && number<=100){
for(int x=0;x<number;x++){
 divisors=0,sum=0,j=0;
    cin>>z;
    for(int i=1;i<=z;i++){
        if(z%i==0 && i!=z){
        sum=divisors+j;
        j=sum;
            }
    }
    if(sum==z)
        cout<<"YES \n ";

    else
        cout<<"NO \n";
 }
}
    return 0;
}

