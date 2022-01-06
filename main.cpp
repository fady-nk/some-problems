#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
long long  A,B,C;
cin>>A>>B>>C;
if(A<B && A<C ){
   if(B<C){
    cout<<A<<endl;
    cout<<B<<endl;
    cout<<C<<endl;
    }
    else {
      cout<<A<<endl;
      cout<<C<<endl;
      cout<<B<<endl;
    }
}
 else if (B<A && B<C )  {
        if(A<C){
    cout<<B<<endl;
    cout<<A<<endl;
    cout<<C<<endl;
    }
    else{
        cout<<B<<endl;
        cout<<C<<endl;
        cout<<A<<endl;
    }
 }
if(C<A && C<B){
    if(A<B){
        cout<<C<<endl;
        cout<<A<<endl;
        cout<<B<<endl;
    }
    else{
        cout<<C<<endl;
        cout<<B<<endl;
        cout<<A<<endl;
    }
}

cout<<endl;
cout<<A<<endl;
cout<<B<<endl;
cout<<C<<endl;

return 0;
}
