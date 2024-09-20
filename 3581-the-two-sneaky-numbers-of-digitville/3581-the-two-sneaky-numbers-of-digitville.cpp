class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>M;
        unordered_map<int,int>hash;
        for(auto it:nums)
        {
            hash[it]++;
        }
        for(auto i:hash)
            
        {
            if(i.second==2)
            {
                M.push_back(i.first);
            }
        }
        return M;
    }
};