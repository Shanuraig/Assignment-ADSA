#include<bits/stdc++.h>
using namespace std;
void joshshep(int n){
    if(n<0) return;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }
    for(int i=1;i<=n;i++){
        if(i%2==1){
            cout<<i<<" ";
        }
    }
}
int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin>>n;
    joshshep(n);
}