#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    vector<int> sticks;
    while (n--)
    {
        int m;
        cin >> m;

        sticks.push_back(m);
    }

    sort(sticks.begin(), sticks.end());

    if (sticks.size() < 4)
    {
        cout << 0;
        return 0;
    }
    else
    {

        cout << (long long)sticks[sticks.size() - 4] * sticks[sticks.size() - 4];
    }

    return 0;
}