#include<iostream>
using namespace std;
int main(){
    int n, i,fact=1;
    
   cout<<"Enter the value of n: ";
   cin>>n;
   for(i=1;i<=n;i++){
        fact=fact*i;
        cout<<"The factorial of number is :"<<fact;
    }
    return 0;
}