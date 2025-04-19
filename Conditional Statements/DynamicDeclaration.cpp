#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;

    if(true){
        int c= a+b;
        cout<<c<<endl;
    }

// the scope of c variable is in only if block we cant access it from outside of if block
 return 0;
}