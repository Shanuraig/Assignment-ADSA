//Gyan Prakash Rai
//22SCSE1011287
#include<bits/stdc++.h>
using namespace std;
struct Node{
    char ch;
    int freq;
    Node *left,*right;
    Node(char c,int f){
        ch=c;
        freq=f;
        left=right=nullptr;
    }
};
struct Compare{
    bool operator()(Node* a,Node* b){
        return a->freq > b->freq;
    }
};
void getCodes(Node* root,string code,unordered_map<char,string>& huffman){
    if(!root)return;
    if(!root->left&&!root->right)huffman[root->ch]=code;
    getCodes(root->left,code+'0',huffman);
    getCodes(root->right,code+'1',huffman);
}
int main(){
    int n;
    cin>>n;
    vector<char> chars(n);
    vector<int> freqs(n);
    
    for(int i=0;i<n;i++) cin>>chars[i];
    for(int i=0;i<n;i++) cin>>freqs[i];

    priority_queue<Node*,vector<Node*>,Compare> pq;

    for(int i=0;i<n;++i)pq.push(new Node(chars[i],freqs[i]));
    while(pq.size()>1){
        Node* a=pq.top();pq.pop();
        Node* b=pq.top();pq.pop();
        Node* merge=new Node('$',a->freq+b->freq);
        merge->left=a;
        merge->right=b;
        pq.push(merge);
    }
    unordered_map<char,string> huffman;
    getCodes(pq.top(),"",huffman);

    for(auto& x:huffman) cout<<x.first<<" "<<x.second<<endl;
    return 0;
}
