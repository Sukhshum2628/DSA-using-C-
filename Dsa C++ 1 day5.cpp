#include<iostream>
#include<array>
#include<algorithm>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void main()
{
    array<int,5> a={3,4,7,2,7};
    int size = a.size();
    vector<int> vec = (3,4,5,2,1);


    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<endl;
    }
    cout<<"Element at index="<<a.at(3)<<endl;
    bool trueFalse = a.empty();
    cout<<"True or False="<<trueFalse<<endl;
    bool empty=a.empty();
    cout<<"is array is empty or not="<<empty;
    cout<<"first element ="<<a.front()<<endl;
    cout<<"last element ="<<a.back()<<endl;
    int number = 7;
    int frequency = count(a.begin(), a.end(), number);
    cout << "The frequency of "<<number<<" in the array is: "<<frequency<<endl;

    return 0;
}
