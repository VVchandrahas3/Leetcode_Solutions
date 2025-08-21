class Solution {
    public int countDigits(int num) {
         int count=0;
        int N=num;
        while(num>0){
        int lastdigit=num%10;
        if(N%lastdigit==0){
        count++;
        }
        
        num=num/10;
        }
        return count;
    }
}