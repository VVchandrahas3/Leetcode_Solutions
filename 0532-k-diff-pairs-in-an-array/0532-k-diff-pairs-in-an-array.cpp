class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        set<vector<int>>st;
        int ans = 0;
        for(int i = 0;i<nums.size();i++){
            // cout<<nums[i]<<" "<<mp[nums[i]+k]<<" "<<mpp[nums[i]]<<endl;
            if(mp[nums[i]+k]!=0){
                vector<int>t = {nums[i],nums[i]+k};
                sort(t.begin(),t.end());
                st.insert(t);
            }
            if(mp[nums[i]-k]!=0){
                vector<int>t = {nums[i],nums[i]-k};
                sort(t.begin(),t.end());
                st.insert(t);
            }
            mp[nums[i]]++;
        }
        return st.size();
    }
};