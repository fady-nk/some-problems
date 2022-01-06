#include <iostream>
using namespace std;

int main()
{


	int t1,t2;

cin >> t1>>t2;

int result;

if(t1>=0 && t2>=0){





  if(t1<=12 && t2<=12 || t1==0 && t2==0){ //AM       AM       AM      AM      AM    AM


     if(t1>t2 || t2>t1  ){

         if(t1>t2){
                result=24-(t1-t2);
                cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}
         else{
            if(t2>t1){
                result=t2-t1;
                cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}
              }
        }

      else if(t1=t2 || t1==0 || t2==0){        //24h   24h   24h   24h    24h    24h
                result=24;
                cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}
    }


  else if(t1>=12 && t2>=12){ //PM PM PM PM PM PM PM PM
     if(t2>t1 || t1>t2){
             if( t2>t1 &&t2>=12 && t1>=12){
             result=t2-t1;
             cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}

             else if(t1>12 && t2>=12 && t1>t2){
                 result=24-(t1-t2);
             cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;
             }


           else {if(t1>t2 && t2>=12){
             result=12-(t1-t2);
               cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}

                }

     }
      else if(t1=t2){

                    if( t1 !=24 && t2 !=24){
                       result=24;
                       cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}
                    else {
                            if(t1=24 ){
                           result=0;
                           cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;}
                         }



          }


     }

 else{
    if(t1<=12 && t2>12){
      if(t1<t2 && t2>=12){
        result=t2-t1;
        cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;
    }
    }

    if(t1>12 && t2<=12){
       if(t2<t1 && t1>=12){
         result=24-t1+t2;
         cout<<"THE GAME LASTED "<<result<<" HOUR(S)"<<endl;
    }

   }
}





}
return 0;
}


