#include <iostream>
#include <vector>
using namespace std;

void printScreen(vector<string> v){
    for(auto s : v){
        cout << s << endl;
    }
}

const wah = 10;

int main(){
    cout << "Hello World" << endl;
    vector<string> map;
    for (int i = 0; i < 10; i++){
        map.push_back("##########");
    }
    printScreen(map);
    return 0;
}