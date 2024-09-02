class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
       vector<int>mp;
       int sum=0;
       for(int i=0;i<nums.size();i++)
       {
        for(int j=i;j<i+1;j++)
        {
            int N=nums[j];
           sum=sum+N;  
        }
        mp.push_back(sum);
       } 
       return mp;
    }
};