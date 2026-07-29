#include <iostream>
#include <map>
using namespace std;

int main(){
    map <string, int> m;

    m["tv"]=100;
    m["watch"]=50;
    m["headphones"]=150;
    m["tablet"]=120;

    m.emplace("camera", 25); //dont have to use []

    
    for(auto p: m){
        cout<<p.first<<" "<<p.second<<endl; //it prints in ascending order of keys 
    }

    cout<< "count of tablets is = "<<m.count("tablet")<<endl; //prints frequency of the key 

    if(m.find("camera")!= m.end()){  //m.end() shifts iterator next to the last element
        cout<<"found\n";
    }
    else{
        cout<<"not found\n";
    }

    

    return 0;
}