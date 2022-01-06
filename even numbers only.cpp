#include <iostream>

using namespace std;

int main()
{
int n;
int x=0;
cin>>n;
int z=n-1;
if( n%2==0 || n%2!=0){

  if(n%2!=0) {


   while(x<z){
     if(x>0 && x%2==0){
        cout<<x<<endl;}


    x++;
    }
   if(z>0 && z%2==0){
 cout<<z<<endl;}

    else{
    cout<<"-1"<<endl;
     }

  }


 else{
 while(x<n){
 if( x>0 && x%2==0){
 cout<<x<<endl;
 }
 x++;

 }
 cout<<n<<endl;
 }

}


    return 0;
}
