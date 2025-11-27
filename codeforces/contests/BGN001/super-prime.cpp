/*
 * https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/E
 */

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n < 5) {
        cout << 0;
        return 0;
    }

    vector<bool> is_prime(n + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (long long i = 2; i * i <= n; i++) {
        if (is_prime[i]) {
            for (long long j = i * i; j <= n; j += i) {
                is_prime[j] = false;
            }
        }
    }

    int count = 0;
    for (int i = 5; i <= n; i++) {
        if (is_prime[i] && is_prime[i - 2]) {
            count++;
        }
    }

    cout << count;

    return 0;
}
