#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 5, 15, 7, 12};
    int n = 5;
    
    for(int pass=0; pass<n; pass++){
        int ex = 0;
        for(int i=pass; i<n-1; i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i], arr[i+1]);
                ++ex;
            }
        }
        if(!ex) break;
    }
    
    for(auto x:arr) cout << x << " ";
    return 0;
}
