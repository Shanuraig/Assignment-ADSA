#include<bits/stdc++.h>
using namespace std;
//using 2d dp 
int longestcommonsubsequence(string st1 , string st2){
    int m=st1.length();
    int n=st2.length();
    vector<vector<int>> dp(m+1,vector<int>(n+1));
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(st1[i-1]==st2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][n];
}
//using 1d dp 
int lcs(string st1 , string st2 ){
    
}
int main(){
    string st1,st2;
    cout<<"Enter the string 1 : "<<endl;
    cin>>st1;
    cout<<"Enter string 2 : "<<endl;
    cin>>st2;
    cout<<"The lcs of this vector is "<<longestcommonsubsequence(st1,st2);
}