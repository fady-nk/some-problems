#include <iostream>
#include <cmath>
using namespace std;
int main(){
int n,x=0;
cin>>n;
int z=n-1;
int l=pow(n,2);
if(n>5 && n<=2000){
if(n%2==0 || n%2 !=0){
    if(n%2==0){
        while(x<=z){
int m=pow(x,2);

        if(x>0 && x%2==0){
        cout<<x<<"^2 = "<<m<<endl;
        }
        x++;
    }

    cout<<n<<"^2 = "<<l<<endl;
    }


else if(n%2 !=0){
           while(x<=z){

int m=pow(x,2);
        if(x>0 && x%2==0){
        cout<<x<<"^2 = "<<m<<endl;
        }
        x++;
    }

    }

}

}

return 0;
}


