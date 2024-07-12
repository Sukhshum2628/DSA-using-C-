#include<iostream>
#include<string>

using namespace std;

int main()
{
    string str= "Hello World";
    string substr= "World";

    size_t found = str.find(substr);

    if(found != string::npos){
        cout<<"Substring found at index "<<found<<endl;

    }
    else
    {
        cout<<"Sub String Not found"<<endl;
    }
    return 0;
}
