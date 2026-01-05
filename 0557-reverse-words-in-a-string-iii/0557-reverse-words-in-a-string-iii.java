class Solution {
    public String reverseWords(String s) {
        StringBuilder S1=new StringBuilder();
        String[] arr=s.trim().split("\\s+");
        for(int i=0;i<arr.length;i++){
            String word=arr[i];
            String newstr="";
            for(int j=0;j<word.length();j++){
                char ch= word.charAt(j);
                newstr=ch+newstr;
            }
            if(S1.length()>0) S1.append(" ");
            S1.append(newstr);
        }
        return S1.toString();
    }
}