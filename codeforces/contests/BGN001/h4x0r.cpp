#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<pair<char, int>> hacker_list;
    hacker_list.push_back({'a', 4});
    hacker_list.push_back({'i', 1});
    hacker_list.push_back({'e', 3});
    hacker_list.push_back({'o', 0});
    hacker_list.push_back({'s', 5});

    string input;
    cin >> input;

    for (size_t i = 0; i < input.length(); i++)
    {
        for (size_t j = 0; j < hacker_list.size(); j++)
        {
            if (input[i] == hacker_list[j].first)
            {
                input[i] = char(hacker_list[j].second + '0');
                break;
            }
        }
    }

    cout << input << endl;

    return 0;
}   