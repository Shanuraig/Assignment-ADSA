#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int> &a , pair<int,int> &b){
    return a.second<b.second;
}
int nonoverlapping(vector<pair<int,int>> & arr){
    sort(begin(arr),end(arr),comp);
    int end=INT_MIN;
    int count=0;
    for(auto &it: arr){
        int s=it.first;
        int e=it.second;
        if(s>=end){
            count++;
            end=e;
        }
    }
    return count;
}