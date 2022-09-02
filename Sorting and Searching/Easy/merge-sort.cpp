#include <iostream>

using namespace std;
void merge(int arr[], int l, int m, int h){
    int t = l, i = l, j = m+1, k;
    int temp[50];
    while(i<=m && j<=h){
        if(arr[i]<arr[j]){
            temp[t] = arr[i];
            i++;
        } else {
            temp[t] = arr[j];
            j++;
        }
        t++;
    }
    if(i>m){
        while(j<=h){
            temp[t] = arr[j];
            j++;
        }
    } else {
        while (i <= m){
            temp[t] = arr[i];
            i++;
            h++;
        }
    }
    for (k = l; k < h; k++)
        arr[k] = temp[k];
}
void mergesort(int arr[], int l, int h){
    int m;
    if(l<h){
        m = (l+h)/2;
        mergesort(arr, l, m);
        mergesort(arr, m+1, h);
        merge(arr, l, m, h);
    }
}

int main()
{
    int arr[5] = {3, 1, 6, 9, 0};
    int n = 5;
    mergesort(arr, 0, n-1);
    for(auto x: arr)
        cout << x << " ";
    return 0;
}
