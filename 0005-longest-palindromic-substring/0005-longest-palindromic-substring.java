class Solution {
    public String longestPalindrome(String s) {
        boolean [][]dp=new boolean[s.length()][s.length()];
        String ans="";
        for(int g=0;g<s.length();g++)
            {
               int i=0,j=g;
            while(i<s.length()&&j<s.length())
            {
                if(g==0)
                {
                    dp[i][j]=true;
                }
                else if(g==1)
                {
                 
                    if(s.charAt(i)==s.charAt(j))
                    {
                        dp[i][j]=true;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }   
                }
                else
                {
                    if(s.charAt(i)==s.charAt(j)&&dp[i+1][j-1]==true)
                    {
                        dp[i][j]=true;
                    }
                    else
                    {
                        dp[i][j]=false;
                    }
                }
                if(dp[i][j]==true)
                {
                    String temp=s.substring(i,j+1);
        if(ans.length()==0||ans.length()<temp.length())ans=temp;
                }
                i++;
                j++;
            }
            
            }
        return ans;
    }
}