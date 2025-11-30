/*
* https://codeforces.com/group/yg7WhsFsAp/contest/355490/problem/P01
*/

#include <iostream>
#include <vector>

using namespace std;

int main() {

    int n;

    cin >> n;

    vector<int> array;

    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        array.push_back(k);
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << array[i] << " ";
    }

    return 0;
}