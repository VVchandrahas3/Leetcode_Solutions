class Solution {
    public int reverse(int x) {
        int n=x;
        int res=0;
        int reverse=0;
        if(n>0)
        {
        while(n>0)
        {
            int lastdigit=n%10;
            reverse=(reverse*10)+lastdigit;
            n=n/10;
        }
        res=reverse;
        }
        else{
           int N=-(x);
        while(N>0)
        {
            int lastdigit=N%10;
            reverse=(reverse*10)+lastdigit;
            N=N/10;
        }
        res= -1*(reverse);
        }
        return res;
    }

}