
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
float N;
cin>>fixed>>setprecision(2)>>N;


    while(N >= 10){
        N= N/10;
    }

int h=N;
int f=(N-h*100)/50;
int t=(N-(100*h+f*50))/20;
int x=(N-(100*h+f*50+t*20))/10;
int y=(N-(100*h+f*50+t*20+x*10))/5;
int z=(N-(100*h+f*50+t*20+x*10+y*5))/2;
int c=(N-(100*h+f*50+t*20+x*10+y*5+z*2))/1;
int n=(N-(100*h+f*50+t*20+x*10+y*5+z*2+c*1))/0.50;
int m=(N-(100*h+f*50+t*20+x*10+y*5+z*2+c*1+n*0.50))/0.25;
int l=(N-(100*h+f*50+t*20+x*10+y*5+z*2+c*1+n*0.50+m*0.25))/0.10;
int k=(N-(100*h+f*50+t*20+x*10+y*5+z*2+c*1+n*0.50+m*0.25+l*0.10))/0.05;


    cout<<"POUNDS:"<<endl;

    cout<<h<<" Banknote(s) from 100.00 EGP"<<endl;
    cout<<f<<" Banknote(s) from 50.00 EGP"<<endl;
    cout<<t<<" Banknote(s) from 20.00 EGP"<<endl;
    cout<<x<<" Banknote(s) from 10.00 EGP"<<endl;
    cout<<y<<" Banknote(s) from 5.00 EGP"<<endl;
    cout<<z<<" Banknote(s) from 2.00 EGP"<<endl;

    cout<<"PIASTRES:"<<endl;

    cout<<c<<" Coin(s) from 1.00 Ersh"<<endl;
    cout<<n<<" Coin(s) from 0.50 Ersh"<<endl;
    cout<<m<<" Coin(s) from 0.25 Ersh"<<endl;
    cout<<l<<" Coin(s) from 0.10 Ersh"<<endl;
    cout<<k<<" Coin(s) from 0.05 Ersh"<<endl;

  return 0;
}
