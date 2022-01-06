#include <iostream>

using namespace std;

int main()
{
    // declare variables
    int num1,num2,num3;

    //get input from user
    cin>>num1>>num2>>num3;
    cout<<endl;

    //conditions
    //sort numbers
    //output

    // num1 smallest one
    if(num1<num2 && num1<num3){
        if(num2 < num3){
           cout<<num1 <<"\n"<< num2 <<"\n"<< num3<<endl;
        }
        else if(num3 < num2){
             cout<<num1<<"\n" << num3 <<"\n"<< num2<<endl;
        }
    }
    //num2 smallest one
    else if(num2<num1 && num2<num3){
          if(num1 < num3){
           cout<<num2 <<"\n"<< num1 <<"\n"<< num3<<endl;
        }
        else if(num3 < num1){
             cout<<num2 <<"\n"<< num3 <<"\n"<< num1<<endl;
        }
    }

    //num3 smallest one
    else if(num3<num1 && num3<num2){
           if(num1 < num2){
           cout<<num3 <<"\n"<< num1 <<"\n"<< num2<<endl;
        }
        else if(num3 < num1){
             cout<<num3 <<"\n"<< num2 <<"\n"<< num1<<endl;
        }
    }
     cout<<endl;
     cout<<num1<<"\n"<<num2<<"\n"<<num3<<endl;
    return 0;
}
