#include <iostream>
using namespace std;
int main()
{
int pass=1999;
int x;
string w="wrong";
string t="true";
int num=0;
int z=5;

do{

while(num<z){
cin>>x;
if(x !=pass){
        cout<<w<<endl;
    }
    else if(x=pass){
        cout<<t<<endl;
    }
}
num++;
}while(x !=pass && x<1000 && x>10000 );

return 0;
}


