//https://www.hackerrank.com/challenges/c-tutorial-strings/problem

#include <iostream>
#include <string>
using namespace std;

int main() {

    string a;
    string b;
    cin >> a;
    cin >> b;
    cout << a.size() << " " << b.size() << '\n';

    string c = a + b;
    cout << c << '\n';

    string d = a;
    d[0] = b[0];
    string e = b;
    e[0] = a[0];
    cout << d << " " << e << '\n';

    return 0;
}
