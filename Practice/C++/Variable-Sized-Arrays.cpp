//https://www.hackerrank.com/challenges/variable-sized-arrays/problem

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    int n,q;
    cin >> n >> q;
    int** a = new int* [n];
    
    for(int i = 0; i < n; i++){
        int k;
        cin >> k;
        a[i] = new int [k];
        
        for(int j = 0; j < m; j++){
            int l;
            cin >> l;
            a[i][j] = l;
        }
    }

    for(int i = 0; i < q; i++)
    {
        int x,y;
        cin >> x >> y;
        cout << a[x][y] << endl;
    }
}
