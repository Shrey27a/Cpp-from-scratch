#include<iostream>
using namespace std;
int main(){
   // char x = 127 ;
    //++x;
 //cout<< (int)x; // gives result -128

    // if we take char x = -128
    // x-- ; ---- output will be 127 
  

   // we can do for integer value also

   int x=2147483648;
   x++;
   cout<<(int)x<<endl;
}