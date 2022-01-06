#include <iostream>
using namespace std;

int main()
{
//declare variables
float num1,num2;
char operation;
cin>>num1>>operation>>num2;
switch(operation)
{
    case '+':
        cout << num1 << " + "<< num2 << " = " << num1 + num2;
        break;

 case '-':
     cout<<num1<<" - "<<num2<<" = "<< num1 - num2;
     break;

 case '*':
      cout<<num1<<" × "<<num2<<" = "<<num1*num2;
      break;

 case '/':
      cout<<num1<<" ÷ "<<num2<<" = "<<num1/num2;
      break;

default:
    // operator is doesn't match any case constant (+, -, *, /)
     cout << "Error! The operator is not correct";
     break;
}
  return 0;
    }
