#include<iostream>
#include<vector>
#include<numeric>
#include<algorithm>
using namespace std;
/*
int main()
{
    vector<int> numbers = {1,2,3,4,5};
    //Using accumulate with the lambda to sum up the elements
    int sum = accumulate(numbers.begin(),numbers.end(),0,[](int total,int n){
        return total +n;

    });
    cout<<"Sum : "<<sum<<endl;//output : Sum: 15
    return 0;
}
*/ 

int main(){
    vector<int> numbers = {1,2,3,4,5};
    int sum =0;
    auto Result = [&sum](int n){
       
         sum+=n;
    };
     for(const int& n:numbers)
     Result(n);
    cout<<sum;
return 0;
    }
    
    