#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
/*
int main()
{
    vector<int> numbers ={1,2,3,4,5};
    for_each(numbers.begin(),numbers.end(),[](int n){
        cout<<n<<" ";
    });
    cout<<endl;
    return 0;
}
*/
int main(){

vector<int> number={1,2,3,4,5,6};
for(int i:number){
    cout<<i<<" ";
}
cout<<endl;
return 0;
}