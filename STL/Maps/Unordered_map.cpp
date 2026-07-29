#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map <string, int> m;

    m.emplace("tv", 100);
    m.emplace("watch", 50);
    m.emplace("fridge", 130);
    m.emplace("wallet", 150);

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl; //prints in random order
    }

    return 0;
}