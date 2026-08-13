#include <iostream>
#include <stack>
using namespace std;

int main(){
    int arr[5]={4, 5, 2, 10, 8};
    int ans[5];

    stack <int> st;
    for(int i = 4; i>=0; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i]=-1;
        }
        else{
            ans[i]=st.top();
        }
        st.push(arr[i]);
    }

    for (int i=0; i<5; i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}