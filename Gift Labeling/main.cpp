#include <iostream>

using namespace std;

int main()
{
    //declare variables
int number,gf=0,x1=0,x2=0,x3=0,x4=0,x5=0,x6=0,x7=0,x8=0,x9=0,x10=0;
string str;

//get number of gifts
cin>>number;

//operations
for(int i=0;i<number;i++){

//get input from user
cin>>str>>gf;
if(gf==1)
x1=x1+1;
else if(gf==2)
x2=x2+1;
else if(gf==3)
x3=x3+1;
else if(gf==4)
x4=x4+1;
else if(gf==5)
x5=x5+1;
else if(gf==6)
x6=x6+1;
else if(gf==7)
x7=x7+1;
else if(gf==8)
x8=x8+1;
else if(gf==9)
x9=x9+1;
else if(gf==10)
x10=x10+1;

//output
if(i==(number-1)){
cout<<"Total de Brinquedos: "<<x1<<endl;
cout<<"Total de Alimentos: "<<x2<<endl;
cout<<"Total de Roupas: "<<x3<<endl;
cout<<"Total de Calcados: "<<x4<<endl;
cout<<"Total de Eletronicos: "<<x5<<endl;
cout<<"Total de Livros: "<<x6<<endl;
cout<<"Total de Gadgets: "<<x7<<endl;
cout<<"Total de Smartphones: "<<x8<<endl;
cout<<"Total de Jogos: "<<x9<<endl;
cout<<"Total de Papelaria: "<<x10<<endl;
}
}
    return 0;
}
