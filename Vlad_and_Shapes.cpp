#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool isSquare(const vector<string>& grid, int n)
{
    int top = n, bottom = -1, left = n, right = -1;

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (grid[i][j] == '1')
            {
                top = min(top, i);
                bottom = max(bottom, i);
                left = min(left, j);
                right = max(right, j);
            }
        }
    }

    int side = bottom - top + 1;
    return (side == right - left + 1);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        if (isSquare(grid, n))
        {
            cout << "SQUARE" << endl;
        }
        else
        {
            cout << "TRIANGLE" << endl;
        }
    }

    return 0;
}


