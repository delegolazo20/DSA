#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[]={1,2,3,4,5,6};
    int n=6;

    unordered_map<int, int> freq;
    for(int i=0; i<n;i++){
        freq[arr[i]]++;
    }
    
    bool found=false;

    for(int i=0; i<n; i++){
        if(freq[arr[i]]>1){
            cout<<arr[i]<<endl;
            break;
        }
    }

    if(!found){
        cout<<"No duplicates found";
    }
    return 0;
}