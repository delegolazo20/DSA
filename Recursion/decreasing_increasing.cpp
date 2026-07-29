#include <iostream>
using namespace std;

void dec(int n){
    if(n>0){
        cout<<n<<" ";
        dec(n-1);
    }
}

void inc(int n){
    if(n>0){
        inc(n-1);
        cout<<n<<" ";
    }
}

int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;

    cout<<"Decreasing series: \n";
    dec(n);
    cout<<"\n";

    cout<<"Increasing series: \n";
    inc(n);
    cout<<"\n";
    return 0;
}