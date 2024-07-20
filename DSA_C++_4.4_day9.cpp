#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
 int findMaxConsecutiveOnes(vector<int>& nums) {
 int sum=0,mSum=0;
 for(int i=0;i<nums.size();i++)
 {
  if(nums[i]==0)
  {
  sum=0;
  }
  else{
  sum+=1;
  if(sum>mSum)
   mSum=sum;
  }
 }
 return mSum;
 }
};
int main() {
  vector<int> nums = {1, 1, 0, 1, 1, 1};
  Solution sol;
  cout << "Solution 1: " << sol.findMaxConsecutiveOnes(nums) << endl;
  return 0;
}



