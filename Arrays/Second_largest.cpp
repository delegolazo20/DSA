#include <iostream>
#include <climits>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;

    if(n<2){
        cout<<"Choose a number greater than 2!";
    }

    int arr[n];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int largest= INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
    }

    int sec_largest=INT_MIN;

    for(int i=0; i<n; i++){
        if(arr[i]>sec_largest && arr[i]!=largest){
            sec_largest=arr[i];
        }
    }

    cout<<"Second largest element is: "<<sec_largest;

}