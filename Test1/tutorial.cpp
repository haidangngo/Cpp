#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    stringstream ss(str);
    int num =0;
    char ch;
    vector<int> v;
    while (!ss.eof()) {
        ss >> num >> ch;
        v.push_back(num);
        cout << num;
    }
    return v
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}

