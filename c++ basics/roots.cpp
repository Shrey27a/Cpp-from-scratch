#include<iostream>
using namespace std;
int main(){
    float a ,b,c;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;

    int r1=(-b + (b*b - 4*a*c))/(2*a);
    int r2=(-b - (b*b - 4*a*c))/(2*a);

    cout<<"Roots are :"<<r1<<" " <<r2;
    return 0;
}