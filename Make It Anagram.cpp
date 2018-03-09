//FILE: MakeItAnagram.cpp
//DATE: March 9th, 2018

#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int main() {
    // make hash array for both string and calculate
    // frequency of each character
    char s1[10010], s2[10010];
    cin >> s1 >> s2;
    int a[26] = {0};
    
    // count frequency of each charcter in first string
    for(int i = 0; i < strlen(s1); i++) {
        a[s1[i] - 'a']++;   
    }
    // count frequency of each charcter in second string
    for(int i = 0; i < strlen(s2); i++) {
        a[s2[i] - 'a']--;
    }
    // traverse count arrays to find number of charcters
    // to be removed
    long long int ans = 0;
    for(int i = 0; i < 26; i++)
        ans += abs(a[i]);
    cout << ans << endl;
    return 0;
}
