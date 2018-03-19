//https://www.hackerrank.com/challenges/cpp-lower-bound/problem

// FILE: Lower-Bound-STL.cpp
// DATE: March 19th, 2018

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);

    for(int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int q;
    cin >> q;

    for (int i = 0; i < q; i++){
        int integer;
        cin >> integer;

        vector<int>::iterator low = lower_bound(numbers.begin(), numbers.end(), integer);

        if (numbers[low - numbers.begin()] == integer){
            cout << "Yes " << (low - numbers.begin() + 1) << endl;
        }
        else{
            cout << "No " << (low - numbers.begin() + 1) << endl;
        }
    }
    return 0;
}
