#include <iostream>

using namespace std;

int main()
{
 //declare variables
 int num,num1=0,num2=0,num3=0;
 cin>>num;
 for(int i=0; i<num ;i++){

    cin>>num1>>num2>>num3;

    if(num1>num2 && num1>num3){
        if(num2>num3)
        cout<<num2<<endl;
      else if(num3>num2)
        cout<<num3<<endl;
    }
   else if(num1<num2 && num2>num3){
        if(num1<num3)
        cout<<num3<<endl;
        else if(num1>num3)
        cout<<num1<<endl;
   }
   else if(num3>num1 && num3>num2){
        if(num2>num1)
        cout<<num2<<endl;
        else if(num1>num2)
            cout<<num1<<endl;
   }
 }


        return 0;
}
