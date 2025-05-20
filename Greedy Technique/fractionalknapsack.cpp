#include<bits/stdc++.h>
using namespace std;
struct Item {
    int value, weight;
};
double fractionalKnapsack(int W, vector<Item> &items) {
    int n=items.size();
    double ratio[n];
    for(int i=0;i<n;i++){
        int p=items[i].value;
        int w=items[i].weight;
        ratio[i]=(double)p/w;
    }
    for (int i = 0; i < n-1; i++) {
        int maxIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (ratio[j] > ratio[maxIdx])
                maxIdx = j;
        }
        swap(items[i], items[maxIdx]);
        swap(ratio[i], ratio[maxIdx]);
    }
    double totalValue = 0.0;
    for (Item &item : items) {
        if (W >= item.weight) {
            W -= item.weight;
            totalValue+=item.value;
        } else {
            totalValue+=item.value*((double)W / item.weight);
            break;
        }
    }
    return totalValue;
}

int main() {
    int n,W;
    cout<<"Enter number of items and knapsack capacity: ";
    cin>>n>>W;
    vector<Item> items(n);
    cout << "Enter value and weight of each item:\n";
    for (int i=0;i<n;++i)
        cin>>items[i].value>>items[i].weight;
    double maxValue = fractionalKnapsack(W, items);
    cout << "Maximum value in Knapsack: " << maxValue << endl;
    return 0;
}
