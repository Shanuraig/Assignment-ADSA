//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
int maxproductsubarray(vector<int> &nums){
    int n=nums.size();
    int maxproduct=nums[0],currmax=nums[0],currmin=nums[0];
    for(int i=0;i<n;i++){
        if(nums[i]<0) swap(currmin,currmax);
        currmin=min(nums[i],currmin*nums[i]);
        currmax=max(nums[i],currmax*nums[i]);
        maxproduct=max(maxproduct,currmax);
    }
    return maxproduct;
}
int main(){
    int n;
    cout<<"Enter the size of the vector : "<<endl;
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter elements : "<<endl;
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int res=maxproductsubarray(nums);
    cout<<res<<endl;
}