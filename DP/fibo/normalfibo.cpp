#include<bits/stdc++.h>;
using namespace std;
int fibo(int n){
    if(n<=1) return n;
    int a=0,b=1,c=1;
    for(int i=2;i<=n;i++){
        c=a+b;
        a=b;
        b=c;
    }
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<fibo(n)<<endl;
}