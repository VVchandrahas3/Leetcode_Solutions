class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>hash;
        int Cnt=0;
        int A=0;
      for(auto i:nums)
      {
          hash[i]++;
      }
      for(auto j:hash)
      {
        if(j.second>A)
        {
            Cnt=j.first;
            A=j.second;
        }
      }  
      return Cnt;
    }
};