#include<iostream>
#include<list>
using namespace std;
int main()
{
    
    
    int i=10;
    int *j =&i;
    j=&(i+34);
    cout<<j<<endl;
    cout<<i<<endl;
    cout<<&i<<endl;
    cout<<*(&i)<<endl;

    return 0;
    /*
    const char * message{"Hello world!"};
    cout<<"Message: "<<message<<endl;//Hell World!
    //*message ="B";//Complier error 
    cout<<"*message : "<<*message <<endl;//H
    //Allow users to modify the string 
    char message[] {"Hello World!"};
    message1[0]='B';
    cout<<"message "
    */
}