//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
class KthLarge{
    priority_queue<int,vector<int>,greater<int>>pq;
    int k;
public:
    KthLarge(int kval,vector<int>&nums){
        k=kval;
        for(int n:nums){
            pq.push(n);
            if(pq.size()>k) pq.pop();
        }
    }
    int add(int val){
        pq.push(val);
        if(pq.size()>k) pq.pop();
        return pq.top();
    }
};
int main(){
    vector<int>v={4,5,8,2};
    KthLarge k3(3,v);
    cout<<k3.add(3)<<endl;
    cout<<k3.add(5)<<endl;
    cout<<k3.add(10)<<endl;
    cout<<k3.add(9)<<endl;
    cout<<k3.add(4)<<endl; 
    return 0;
}
