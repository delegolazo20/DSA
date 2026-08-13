#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string, int> mp;
    mp["Alice"]=22;
    mp["Bob"]=20;
    mp["Sharon"]=19;

    cout<<mp["Alice"]<<endl;
    mp.erase("Bob");

    if(mp.find("Alice")!=mp.end()){ //to check if it exists
        cout<<"Found!";
    }


}