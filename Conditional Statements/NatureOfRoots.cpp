#include<iostream>
using namespace std;
int main(){

    float a,b,c,d,r1,r2;
    cout<<"Enter the values of a,b,c "<<endl;
    cin>>a>>b>>c;

    d=b*b -4*a*c;

    if(d==0){
        cout<<"roots are real and equal"<<endl;
        cout<<(-b/(2*a));
    }

    else if(d>0){
        cout<<"Roots are real and unequal"<<endl;
        cout<<(-b + (b*b -4*a*c))/(2*a);
        cout<<(-b - (b*b -4*a*c))/(2*a);
    }

    else{
        cout<<"Imaginary"<<endl;
    }
}
