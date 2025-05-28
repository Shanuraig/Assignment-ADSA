//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
string lcp(vector<string>&v){
    if(v.empty()) return "";
    sort(v.begin(),v.end());
    string a=v[0],b=v.back(),res="";
    for(int i=0;i<a.size() && i<b.size();i++){
        if(a[i]==b[i]) res+=a[i];
        else break;
    }
    return res;
}
int main(){
    int n;cin>>n;
    vector<string>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    cout<<lcp(v)<<endl;
    return 0;
}
