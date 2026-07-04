#include <iostream>
using namespace std;



int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;

    int arr[n];
    cout<<"Enter elements: \n";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=0; i<n-1; i++){
        int minIndex=i;
        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex=j;
            }
        }    

            swap(arr[i], arr[minIndex]);
    }

    cout<<"New sorted array is: \n";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    return 0;

}