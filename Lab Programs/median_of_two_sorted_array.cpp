//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
double getmed(vector<int>&a,vector<int>&b){
    if(a.size()>b.size()) return getmed(b,a);
    int n=a.size(),m=b.size();
    int l=0,r=n;
    while(l<=r){
        int i=(l+r)/2,j=(n+m+1)/2-i;
        int l1=i==0?INT_MIN:a[i-1];
        int r1=i==n?INT_MAX:a[i];
        int l2=j==0?INT_MIN:b[j-1];
        int r2=j==m?INT_MAX:b[j];
        if(l1<=r2&&l2<=r1){
            if((n+m)%2==0) return (max(l1,l2)+min(r1,r2))/2.0;
            else return max(l1,l2);
        }
        else if(l1>r2) r=i-1;
        else l=i+1;
    }
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    cout<<getmed(a,b)<<endl;
    return 0;
}
