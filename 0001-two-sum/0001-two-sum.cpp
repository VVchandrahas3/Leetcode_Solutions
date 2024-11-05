class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        //Brute Force 
    /*vector<int>n;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]+nums[j]==target)
                {
                   n.push_back(i);
                   n.push_back(j);
                }
            }

        }
       return n; */
       //optimal Approach
    map<int,int>mp;
    for(int i=0; i<nums.size(); i++)
    {
        int a = nums[i];
        int cal = target - a;

        if(mp.find(cal) != mp.end()){
            return {mp[cal],i};
        }
        mp[a] = i;
    }
    return {-1,-1};
    }
    
};