#include<iostream>
using namespace std;
int main(){
    int i=1;
    int n;
   cout<<"Enter the value of n: ";
   cin>>n;
   
   do{
    cout<<i<<endl;
    i++;
   }
   while(i<=n); // semicolon is madatpry after while loop in do-while scenario
}