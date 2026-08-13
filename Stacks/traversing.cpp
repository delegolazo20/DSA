#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack <int> st;
    

    st.push(30);
    st.push(20);
    st.push(10);
    stack <int> temp = st; //temporary stack so that while running the loop, the original one doesnt get erased

    cout<<"elements of stack are: ";
    while (!temp.empty()){
        cout<< temp.top()<<" ";
        temp.pop();
    }

    return 0;
}