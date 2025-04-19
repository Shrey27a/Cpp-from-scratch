#include<iostream>
using namespace std;
int main(){
   int age;
   cout<<"Enter age :"<<endl;
   cin>>age;

   if(age<=12 || age>=50){
    cout<<"They are eligible"<<endl;
   }
   else{
    cout<<"Not eligible"<<endl;
   }
return 0;
}