#include<bits/stdc++.h>
using namespace std;
//Solution 1
int main () {
    vector<int> Binary = {1,0,1,1,0,0,1,1,1};
    int n=Binary.size();
    int count = 0;
    int maxValue = 0;
    for (int i = 0 ;i<n;i++) {
        if (Binary[i] == 1){
            count++;
            }
            else
            {
                maxValue=max(count,maxValue);+
                count=0;
            }
    }
    cout<<"Maximum Consecutives for number 1 is : "<<max(count,maxValue)<<endl;
    return 0;
}