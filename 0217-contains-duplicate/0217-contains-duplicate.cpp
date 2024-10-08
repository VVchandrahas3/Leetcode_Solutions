class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(auto i:nums)
        {
            mp[i]=mp[i]+1;
        }
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                return true;
            }
        }
        return false;
    }
};