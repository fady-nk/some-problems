#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //declare variables
   float a=0.0,b=0.0,c=0.0,sum=0,a2,v=0;

   //get input from user
   cin>>a>>b>>c;

   //operations to know type of triangle

   //arrange sides
   if(a>b &&a>c)
    a=a;

   else if(b>a && b>c){
    v=a;
    a=b;
    b=v;
    }

    else if(c>a && c>b){
       v=a;
       a=c;
       c=v;}


sum= pow(b,2)+pow(c,2);
    a2=pow(a,2);


 if(a>=(b+c)){

    cout<<"NAO FORMA TRIANGULO\n";}


 else if(a2==sum || a2>sum){
    if(a2==sum){
    cout<<"TRIANGULO RETANGULO\n";
      if(a==b && a==c)
      cout<<"TRIANGULO EQUILATERO\n";

      else if(a==b || b==c || a==c)
      cout<<"TRIANGULO ISOSCELES\n";}

   else if(a2>sum){
    cout<<"TRIANGULO OBTUSANGULO\n";

      if(a==b && a==c)
      cout<<"TRIANGULO EQUILATERO\n";

      else if(a==b || b==c || a==c)
      cout<<"TRIANGULO ISOSCELES\n";}

                    }





else if(a2<sum){

    cout<<"TRIANGULO ACUTANGULO\n";
      if(a==b && a==c)
           cout<<"TRIANGULO EQUILATERO\n";

      else if(a==b || b==c || a==c)
          cout<<"TRIANGULO ISOSCELES\n";

   }
    return 0;
}
