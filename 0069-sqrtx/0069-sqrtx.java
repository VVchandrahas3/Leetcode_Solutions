class Solution {
    public int mySqrt(int x) {
        long low = 0 , high = (long)x;
        while(low<=high){
            long mid = (high-low)/2+low;
            if(mid*mid == (long)x) return (int)mid;
            else if(mid*mid>(long)x) high = mid-1;
            else low = mid+1;
        }
        return (int)high;

    }
}