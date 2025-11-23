/*
 * https://codeforces.com/problemset/problem/2125/A
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>
#include <vector>
using namespace std::chrono;
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q = 0;
    string s;
    vector<string> results;

    if (!(cin >> q))
        return 0;
    while (q--)
    {
        cin >> s;

        bool has_fft = s.find("FFT") != string::npos;
        bool has_ntt = s.find("NTT") != string::npos;   
        if (has_fft || has_ntt)
        {
            sort(s.rbegin(), s.rend());
        }

        results.push_back(s);
    }

    for (const auto &str : results)
    {
        cout << str << '\n';
    }

    return 0;
}