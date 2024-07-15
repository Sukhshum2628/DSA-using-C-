#include <iostream>
#include <deque>
#include <vector>
#include<array>
#include<list>
#include <algorithm>

using namespace std;

int main()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(11);
    for(int i:d){
        cout<<i<<" ";
    }
    d.pop_back();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<"front "<<d.front()<<endl;
    cout<<"back "<<d.back()<<endl;
    cout<<"Empty or not "<<d.empty()<<endl;
    cout<<"before erase "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"after erase "<<d.size()<<endl;
    return 0;

}
