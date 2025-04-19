#include<iostream>
using namespace std;
/*enum day{ Mon, Tues , Wed , Thurs , FRi , Sat , Sun };

all these are set of constants under one name which we cannot modify also.


int main(){
    day d;
    d=Mon;// gives 0 (by default it starts with 0)
    d=Tues; // gives 1

    cout<<d<<endl;
}
    */

//if

enum day{Mon=2 , Tues , Wed=5 , Thurs ,Fri ,Sat=11 , Sun};
int main(){
day d;
d=Tues;
 
cout<<Mon<<endl;
cout<<Tues<<endl;
cout<<Wed<<endl;
cout<<Thurs<<endl;
cout<<Fri<<endl;
cout<<Sat<<endl;
cout<<Sun<<endl;


/*output is 
2
3
5
6
7
11
12
*/
}
