#include<iostream>
using namespace std;
int main(){
    int u ,v , a;
    float speed;
    cout<<"Enter 3 numbers :";
    cin>>u>>v>>a;
    speed = (v*v - u*u)/(2*a);
    cout<<"The speed is :" << speed <<endl;
    return 0;

}