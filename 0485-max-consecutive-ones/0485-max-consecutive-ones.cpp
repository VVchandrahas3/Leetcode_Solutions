class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
         int A=0;
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {   
            if(nums[i]==1)
            {
                count=count+1;
            }
            
            else if(nums[i]!=1)
            {
                 A = max(A, count);
                count=0;
            }
        }
         A = max(A, count);
        return A;
    }
};