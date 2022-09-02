#include <iostream>

using namespace std;

void quick_sort(int arr[], int l, int h){
    int i, j, temp, p;
    p = l;
    i = l;
    j = h;
    if(l<h){
        while(i<j){
            while(arr[i]<=arr[p] && i<h)
                i++;
            while(arr[j]>arr[p])
                j--;
            if(i<j){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
        temp = arr[p];
        arr[p] = arr[j];
        arr[j] = temp;
        quick_sort(arr, l, j-1);
        quick_sort(arr, j+1, h);
    }
}

int main()
{
    int arr[5] = {3, 1, 6, 9, 0};
    int n = 5;
    quick_sort(arr, 0, n-1);
    for(auto x: arr)
        cout << x << " ";
    return 0;
}
