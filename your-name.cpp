/*
 * https://codeforces.com/problemset/problem/2167/B
 */
#include <iostream>
#include <algorithm>
#include <string>
#include <chrono>
using namespace std::chrono;
using namespace std;

void sort_string(string &);
long long time_sort(string);

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int q;
    if (!(cin >> q))
        return 0;
    while (q--)
    {
        int n;
        string s, t;
        cin >> n >> s >> t;
        string a = s, b = t;
        // sort(a.begin(), a.end());
        // sort(b.begin(), b.end());

        sort_string(a);
        sort_string(b);

        long long time_run_sort = time_sort(a);
        cout << "Time taken to sort string a: " << time_run_sort << " microseconds\n";

        cout << (a == b ? "YES" : "NO") << '\n';
    }
    return 0;
}


void sort_string(string &str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] > str[j])
            {
                swap(str[i], str[j]);
            }
        }
    }
}


/*
* Selection Sort
void sort_string(string &str)
{
    for (int i = 0; i < str.length() - 1; i++)
    {
        int min_idx = i;

        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[j] < str[min_idx])
            {
                min_idx = j;
            }
        }
        swap(str[i], str[min_idx]);
    }
}
*/

long long time_sort(string str)
{
    auto start = high_resolution_clock::now();
    sort_string(str);
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<nanoseconds>(stop - start);
    return duration.count();
}