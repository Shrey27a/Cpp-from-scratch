#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   for(i=1;i<=10;i++){
        cout<<n<<"X" <<i<<"="<<i*n;
        cout<<endl;
    }
    return 0;
}