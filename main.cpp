#include <iostream>
#include <vector>
using namespace std;

void printScreen(vector<string> v){
    for(auto s : v){
        cout << s << endl;
    }
}

int main(){
    cout << "Hello World" << endl;
    cout << "This is a new line" << endl;
    cout << "wah" << endl;
    vector<string> map;
    for (int i = 0; i < 10; i++){
        map.push_back("##########");
    }
    printScreen(map);
    return 0;
}