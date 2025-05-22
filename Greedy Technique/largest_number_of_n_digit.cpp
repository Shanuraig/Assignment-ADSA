#include<bits/stdc++.h>
using namespace std;
 string largestNumber(int n , int sum){
       if(sum<0 || n*9<sum) return to_string(-1);
       string result="";
       for(int i=0;i<n;i++){
        int digit;
        if(sum>=9){
            digit=9;
            sum-=9;
        }
        else{
            digit=sum;
            sum=0;
        }
        result+=to_string(digit);
       }
       return result;
}