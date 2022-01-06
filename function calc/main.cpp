#include <iostream>

using namespace std;

float operation(float a,char sign,float b)
{
  float result;

  switch(sign)
{
    case '+':
        result=a+b;

        break;

 case '-':
     result=a-b;
     break;

 case '*':
      result=a*b;
      break;

 case '/':
     result=a/b;
      break;

default:
   result=0;
     break;
}
return result;
}

int main()
{

    //declare variables
float num1,num2;
char sign;
cin>>num1>>sign>>num2;
float Result=operation(num1,sign,num2);
cout<<Result<<endl;

    return 0;
}




