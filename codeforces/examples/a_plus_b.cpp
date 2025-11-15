#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vi vector<int>
#define vll vector<long long>
#define pii pair<int, int>
#define pll pair<long long, long long>
#define pb push_back
#define mp make_pair
#define F first
#define S second
#define all(x) x.begin(), x.end()
#define sz(x) (int)x.size()
#define fastio ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

// Example Problem: A+B Problem
// Given two integers A and B, output their sum

void solve() {
    int a, b;
    cin >> a >> b;
    cout << a + b << endl;
}

int main() {
    fastio;
    
    int t = 1;
    // cin >> t;  // Uncomment if multiple test cases
    
    while(t--) {
        solve();
    }
    
    return 0;
}
