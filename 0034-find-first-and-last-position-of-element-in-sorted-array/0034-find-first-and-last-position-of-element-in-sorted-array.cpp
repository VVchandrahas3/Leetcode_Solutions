class Solution {
private:
int first_occ(vector<int>& nums, int target){
 int n=nums.size();
 int low=0;
 int high=n-1;
 int ans=-1;
 while(low<=high)
 {
    int mid=(low+high)/2;
    if(nums[mid]==target)
    {
        ans=mid;
        high=mid-1;
    }
    else if(nums[mid]>target)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
 }
 return ans;
}
int last_occ(vector<int>& nums, int target)
{
     int n=nums.size();
 int low=0;
 int high=n-1;
 int ans=-1;
 while(low<=high)
 {
    int mid=(low+high)/2;
    if(nums[mid]==target)
    {
        ans=mid;
        low=mid+1;
    }
    else if(nums[mid]>target)
    {
        high=mid-1;
    }
    else{
        low=mid+1;
    }
 }
 return ans;
}
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=first_occ(nums,target);
        if(i==-1){
            return {-1,-1};
        }
        int j=last_occ(nums,target);
       
        return {i,j};
    
    }
};