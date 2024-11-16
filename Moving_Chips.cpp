#include <iostream>
#include <vector>

using namespace std;

int minOperations(vector<int>& cells)
{
    int operations = 0;
    int lastChipIndex = -1;

    for (int i = 0; i < cells.size(); ++i)
    {
        if (cells[i] == 1)
        {
            if (lastChipIndex != -1)
            {
                operations += i - lastChipIndex - 1;
            }
            lastChipIndex = i;
        }
    }

    return operations;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> cells(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> cells[i];
        }

        cout << minOperations(cells) << endl;
    }

    return 0;
}

