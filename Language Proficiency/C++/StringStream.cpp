// https://www.hackerrank.com/challenges/c-tutorial-stringstream/problem

#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
    stringstream ss(str);
    vector<int> answer; 
    char ch;
    int temp;
    
    while (ss >> temp){
        answer.push_back(temp);
        ss >> ch;
    }
    return answer;
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
