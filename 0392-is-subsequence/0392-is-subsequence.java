class Solution {
    public boolean isSubsequence(String s, String t) {
       char[] arr1=s.toCharArray();
       char[] arr2=t.toCharArray(); 
       int j=0,cnt=0;
       for(int i=0;i<arr1.length;i++){
        while(j<arr2.length){
            if(arr1[i]==arr2[j]){
                cnt++;
                j++;
                break;
            }
            j++;
        }
       }
       if(cnt==arr1.length){
        return true;
       }
       else{
        return false;
       }
    }
}