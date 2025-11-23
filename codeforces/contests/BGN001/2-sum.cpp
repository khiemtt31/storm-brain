#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;

    bool flag = false;

    vector<int> result;
    while (a--)
    {
        int c;
        cin >> c;

        if (c < b)
        {
            result.push_back(c);
        }
    }

    for (size_t i = 0; i < result.size(); i++)
    {
        for (size_t j = i + 1; j < result.size(); j++)
        {
            if (result[i] + result[j] == b)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }

    }

    if (flag) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}