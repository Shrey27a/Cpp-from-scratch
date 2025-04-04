//collection of alphabets and characters that are forming a single entity is called string
#include<iostream>
using namespace std;
int main()
{   string str;

    cout<<"May I know your name : ";
    //cin>>str; // to print shreya 
    getline(cin,str); //to get full name ( to print shreya sharma) or string we use getline
    cout<<"Hello "<<str; 

    return 0;
}




