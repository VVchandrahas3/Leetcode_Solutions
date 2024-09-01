class Solution {
public:
    bool isPalindrome(int x) {
        long sum=0;
        int duplicate_of_x=x;
        if(x>=0)
        {
            if(x==0)
            {
                return true;
            }
            else{
                while(x>0)
                {
                    int lastdigit=x%10;
                    sum=(sum*10)+lastdigit;
                    x=x/10;
                }
                if(duplicate_of_x==sum)
                {
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return false;

    }
};