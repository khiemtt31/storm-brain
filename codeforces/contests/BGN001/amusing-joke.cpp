/*
* https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/D
*/

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    bool flag = false;

    string a, b, c;

    cin >> a >> b >> c;

    string ab = a + b;
    sort(ab.begin(), ab.end());
    sort(c.begin(), c.end());

    if (ab == c) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}