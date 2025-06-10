#include<bits/stdc++.h>
using namespace std;
int longestsubstring(string st1 , string st2){
    int n=st1.length();
    int m=st2.length();
    int ans=0;
    vector<vector<int>> dp(n+1,vector<int>(m+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(st1[i-1]==st2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
                ans=max(ans,dp[i][j]);
            }
            else{
                dp[i][j]=0;
            }
        }
        return ans;
    }
}