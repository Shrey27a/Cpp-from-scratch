#include<iostream>
using namespace std;
int main(){
    int hour;
    cout<<"Enter hours:";
    cin>>hour;

    if(hour>=9 && hour<=18) {
        cout<<"Working hours"<<endl;
    }
    else{
        cout<<"Leisure hours"<<endl;
    }

}