#include <iostream>
#include <map>
using namespace std;

int main(){
    multimap<string, int> m;

    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100);
    m.emplace("tv", 100); 

    // m.erase("tv");  ----> it will delete the key "tv" altogether, so nothing will be printed

    m.erase(m.find("tv"));

    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl;  //all keys and values will get printed even if they are the exact same
    }


    return 0;
}