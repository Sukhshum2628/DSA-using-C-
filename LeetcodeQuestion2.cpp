#include<iostream>
#include<vector>
using namespace std;
class Solution{
    public: 
    vector<int> productExceptSelf(vector<int>& nums){
    vector<int> result;
        int flag=0;
        int value =1;
        for(int i:nums){
            if(i==0){
                flag++;
            }
            else{
                value*=i;
            }
        }
        if(flag>1){
            for(int i =0;i<nums.size();i++){
                result.push_back(0);
            }
            return result;
            exit(0);
        }

        for(int i:nums){
            if(flag==0){
                result.push_back(value/i);
            }
            else if(flag>0 && i!=0){
                result.push_back(0);
            }
            else{
                result.push_back(value);
            }
        }
    }
};

int main()
{
    Solution obj;
    vector<int> nums ={1,2,3,4};
    vector<int> result = obj.productExceptSelf(nums);
    for(int value:result){
            cout<<value<<" ";
    }
    cout<<endl;
   
    return 0;
}