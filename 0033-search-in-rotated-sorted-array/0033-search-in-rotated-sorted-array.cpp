class Solution {
public:
    int search(vector<int>& arr, int target) {
        int n=arr.size();
        int ans=-1;
        int low=0,high=n-1;
        while(low<=high)
        {
            int mid=(low+high)/2;
            if(arr[mid]==target)
            {
                ans=mid;
                break;
            }
            else if(arr[low]<=arr[mid])
            {
                if(arr[low]<=target && target<arr[mid])
                {
                    high=mid-1;
                }
                else{
                    low=mid+1;
                }
            }
            else 
            {
                if(arr[mid]<target&&target<=arr[high]){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
        }
        return ans;
    }
};