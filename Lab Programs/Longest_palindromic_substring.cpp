//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
string longestPalSubstr(string s){
    int start=0,maxLen=1,n=s.size();
    for(int i=0;i<n;i++){
        int l=i,r=i;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>maxLen){
                maxLen=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
        l=i;
        r=i+1;
        while(l>=0 && r<n && s[l]==s[r]){
            if(r-l+1>maxLen){
                maxLen=r-l+1;
                start=l;
            }
            l--;
            r++;
        }
    }
    return s.substr(start,maxLen);
}
int main(){
    string str;
    cin>>str;
    cout<<longestPalSubstr(str)<<endl;
    return 0;
}
