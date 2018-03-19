//https://www.hackerrank.com/challenges/cpp-sets/problem

// FILE: Sets-STL.cpp
// DATE: March 19th, 2018

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int queries, type, number;
    cin >> queries;

    set<int> s;
    for (int i = 0; i < queries; i++){
        cin >> type >> number;

        switch(type){
        case 1:
            s.insert(number);
            break;
        case 2:
            s.erase(number);
            break;
        case 3:
            set<int>::iterator itr = s.find(number);
            if(itr == s.end()){
                cout << "No" << endl;
            }
            else{
                cout << "Yes" << endl;
            }
            break;
        }
    }
    return 0;
}
