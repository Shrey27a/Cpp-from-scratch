#include<iostream>
using namespace std;
int main(){
    int i =5 ,j ;
   // j=i++; output is ----- i=6 , j=5
   // j=++i; // output is  --- i=6, j=6
    j = 2*i++ + 2*i++;// in this result may vary in diff compilers
    cout<<i<< " " <<j <<endl;
}