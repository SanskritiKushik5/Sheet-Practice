#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5] = {10, 5, 15, 7, 12};
    int n = 5;
    int mi;
    for(int pass=0; pass<n; pass++){
        mi = pass;
        for(int i=pass+1; i<n; i++){
            if(arr[i]<arr[mi])
                mi = i;
        }
        if(mi!=pass)
            swap(arr[pass], arr[mi]);
    }
    
    for(auto x:arr) cout << x << " ";
    return 0;
}
