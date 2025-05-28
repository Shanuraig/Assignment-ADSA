//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
int maxfreq(vector<int>&v){
    unordered_map<int,int>mp;
    for(int x:v) mp[x]++;
    int val=v[0],freq=0;
    for(auto& it :mp){
        if(it.second>freq){
            freq=it.second;
            val=it.first;
        }
    }
    return val;
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<maxfreq(v)<<endl;
    return 0;
}
