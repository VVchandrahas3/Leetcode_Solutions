class Solution {
    public boolean isPalindrome(int x) {
        int dup=x;
        int rev=0;
        if(dup<0)
        {
            return false;
        }
        while(dup>0){
            int lastdigit=dup%10;
            rev=rev*10+lastdigit;
            dup=dup/10;
        }
        if(rev==x)
        {
            return true;
        }
        else{
            return false;
        }
    }
}