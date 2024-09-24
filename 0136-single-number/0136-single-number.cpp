class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int>mp;
        int A;
        for(int i=0;i<nums.size();i++)
        {
            mp[nums[i]]++;
        }
       for(auto i=mp.begin();i!=mp.end();i++)
       {
        if(i->second==1)
        {
            A=i->first;
        }
       }
       return A;
    }
};