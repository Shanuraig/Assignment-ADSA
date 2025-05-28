//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
int minStepsToReachEnd(vector<int>& path){
    int steps=0,reach=0,limit=0;
    for(int i=0;i<path.size()-1;i++){
        reach=max(reach,i+path[i]);
        if(i==limit){
            ++steps;
            limit=reach;
        }
    }
    return steps;
}
int main(){
    int size;
    cin>>size;
    vector<int> path(size);
    for(int i=0;i<size;++i)cin>>path[i];
    cout<<minStepsToReachEnd(path)<<endl;
    return 0;
}
