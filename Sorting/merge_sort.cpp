#include <iostream>
using namespace std;

void merge(int arr[], int left, int mid, int right){
    int temp[100];

    int i=left;
    int j=mid+1;
    int k=left;  //position in temp array

    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp[k]=arr[i];
            i++;
        }

        else{
            temp[k]=arr[j];
            j++;
        }

        k++;
    }

        // Copy remaining elements from left half
    while(i <= mid)
    {
        temp[k] = arr[i];
        i++;
        k++;
    }

    // Copy remaining elements from right half
    while(j <= right)
    {
        temp[k] = arr[j];
        j++;
        k++;
    }

    // Copy temp back into original array
    for(int i = left; i <= right; i++){
        arr[i] = temp[i];
    }
    
}

void mergeSort(int arr[], int left, int right){
    if(left>=right){
        return;
    }

    int mid=(left+right)/2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid+1, right);

    merge(arr, left, mid, right);

}

int main(){
    int n;
    cout<<"Enter number n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    mergeSort(arr, 0, n-1);

    cout << "Sorted Array:\n";

    for(int i = 0; i < n; i++)
        cout << arr[i] << " ";

    return 0;
}