class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n=nums.size();
    int negEle=1,posEle=0;
    vector<int>d(n,0);
    for(int i=0;i<n;i++)
    {
        if(nums[i]<0)
        {
          d[negEle]=nums[i];
          negEle+=2;
        }
        else{
            d[posEle]=nums[i];
            posEle+=2;
        }
    }
    return d;
    }
};