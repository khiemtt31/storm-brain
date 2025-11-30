/*
* https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P02
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n, a, b;

    cin >> n;

    vector<int> array;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        array.push_back(k);
    }

    cin >> a >> b;

    int count = 0;
    while (a <= b) {
        count += array[a];
        a++;
    }

    cout << count;

    return 0;
}