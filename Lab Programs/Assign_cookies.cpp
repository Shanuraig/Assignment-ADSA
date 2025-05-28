//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
int maxSatisfiedChildren(vector<int>& kids,vector<int>& cookies){
    sort(kids.begin(),kids.end());
    sort(cookies.begin(),cookies.end());
    int i=0,j=0,count=0;
    while(i<kids.size() && j<cookies.size()){
        if(kids[i]<=cookies[j]){
            count++;
            i++;
        }
        j++;
    }
    return count;
}
int main(){
    int n,m;
    cin>>n;
    vector<int> kids(n);
    for(int i=0;i<n;++i)cin>>kids[i];
    cin>>m;
    vector<int> cookies(m);
    for(int i=0;i<m;++i) cin>>cookies[i];
    cout<<maxSatisfiedChildren(kids,cookies)<<endl;
    return 0;
}
