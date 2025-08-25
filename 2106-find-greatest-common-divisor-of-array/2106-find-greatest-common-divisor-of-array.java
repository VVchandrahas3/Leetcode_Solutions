class Solution {
    public int findGCD(int[] nums) {
        int largest=0;
        int A=1;
        for(int i=0;i<nums.length;i++){
            if(nums[i]>largest)
            {
                largest=nums[i];
            }
        }
        int smallest=Integer.MAX_VALUE;
        for(int i=0;i<nums.length;i++){
            if(nums[i]<smallest)
            {
                smallest=nums[i];
            }
        }
        for(int i=smallest;i>=0;i--)
        {
            if(smallest%i==0&&largest%i==0)
            {
                A=i;
                break;
            }
        }
        return A;
    }
}