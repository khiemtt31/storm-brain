/*
 * https://codeforces.com/group/yg7WhsFsAp/contest/355495/problem/F
 */

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    vector<int> freq(26, 0);
    for (char c : s) {
        freq[c - 'A']++;
    }
    
    vector<int> freqs;
    for (int f : freq) {
        if (f > 0) freqs.push_back(f);
    }
    sort(freqs.rbegin(), freqs.rend());
    
    long long ans = 0;
    for (int f : freqs) {
        if (k == 0) break;
        int take = min(k, f);
        ans += (long long)take * take;
        k -= take;
    }
    
    cout << ans << endl;
    
    return 0;
}


