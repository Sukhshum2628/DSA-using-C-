//Capture by value [=]
//capture by reference [&]
//cpature specific value [x,&y]
#include<iostream>
using namespace std;
int main() 
{
    int x =10;
    int y =20;
    auto add=[=](int a){
        return x+y+a;
    };
    cout<<"Sum: "<<add(5)<<endl;
    auto addByRef = [&x,&y](int a){
        x=30;
        return x+y+a;
    };
    cout<<"Sum by reference: "<<addByRef(5)<<endl;
    cout<<"After modification: "<<x<<endl;
    return 0;
}