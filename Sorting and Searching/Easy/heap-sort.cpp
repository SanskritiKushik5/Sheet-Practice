#include <iostream>

using namespace std;

void heapify(int arr[], int n, int i)
{
    int largest = i;
    int l = 2*i + 1;
    int r = 2*i + 2;
    int t;
    if (l<n && arr[l]>arr[largest])
        largest = l;
    if (r<n && arr[r]>arr[largest])
        largest = r;
    if (largest != i){
        t = arr[i];
        arr[i] = arr[largest];
        arr[largest] = t;
        heapify(arr, n, largest);
    }
}void heapsort(int arr[], int n)
{
    int i, t;
    for(i=(n/2 - 1); i>=0; i--)
    {
        heapify(arr, n, i);
    }
    for(i=n-1; i>=0; i--)
    {
        t = arr[0];
        arr[0] = arr[i];
        arr[i] = t;
        heapify(arr, i, 0);
    }
}
int main()
{
    int arr[5] = {3, 1, 6, 9, 0};
    int n = 5;
    heapsort(arr, n);
    for(auto x: arr)
        cout << x << " ";
    return 0;
}
