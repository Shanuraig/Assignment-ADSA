//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
class Stack{
    queue<int>q1,q2;
public:
    void push(int x){
        q2.push(x);
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        swap(q1,q2);
    }
    void pop(){
        if(!q1.empty()) q1.pop();
    }
    int top(){
        return q1.empty()?-1:q1.front();
    }
    bool empty(){
        return q1.empty();
    }
};
int main(){
    Stack s;
    s.push(15);
    s.push(30);
    s.push(45);
    cout<<s.top()<<endl;
    s.pop();
    cout<<s.top()<<endl;
    return 0;
}
