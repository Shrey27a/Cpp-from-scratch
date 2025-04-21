#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   for(i=1;i<=n;i++){
        if(n%i==0)
        {
            cout<<i<<endl;
        }
}
return 0;
}