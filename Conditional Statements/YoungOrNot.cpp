#include<iostream>
using namespace std;
int main(){
   int age;
   cout<<"Enter age :"<<endl;
   cin>>age;

   if(age>=18 && age<=30){
    cout<<"person is young"<<endl;
   }
   else{
    cout<<"Not young"<<endl;
   }
return 0;
}