#include <iostream>
using namespace std;

int binarySearch(int arr[], int low, int high, int key){

    if(low>high){
        return -1;
    }

    int mid=(low+high)/2;

    if(arr[mid]==key){
        return mid;
    }

    if(key<arr[mid]){
        return binarySearch(arr, low, mid-1, key);
    }

    else return binarySearch(arr, mid+1, high, key);
}

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    int arr[n];
    cout<<"Enter sorted elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int l=0;
    int h=n-1;

    int key;
    cout<<"Enter key: ";
    cin>>key;

    int index= binarySearch(arr, l, h, key);

    if(index!= -1){
        cout<<"Element found at index "<<index;
    }

    else cout<<"Element not found!";


    return 0;

}