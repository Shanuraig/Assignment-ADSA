//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
bool checkPal(int num){
    if(num < 0) return false;
    int orig = num, rev = 0;
    while(num){
        rev = rev * 10 + num % 10;
        num /= 10;
    }
    return orig == rev;
}

int main(){
    int n;
    cout<<"Enter the value of n : "<<endl;
    cin >> n;
    if(checkPal(n)) cout << n << " is palindrome\n";
    else cout << n << " is not palindrome\n";
    return 0;
}
