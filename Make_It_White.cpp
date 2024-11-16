
#include <iostream>
#include <vector>
#include <string>

using namespace std;

int distanceBetweenFirstAndLastB(const string& arr)
{
    int firstBIndex = -1;
    int lastBIndex = -1;

    for (int i = 0; i < arr.length(); ++i)
    {
        if (arr[i] == 'B')
        {
            if (firstBIndex == -1)
            {
                firstBIndex = i;
            }
            lastBIndex = i;
        }
    }

    return (lastBIndex - firstBIndex);
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        string arr;
        cin >> n >> arr;

        int distance = distanceBetweenFirstAndLastB(arr);
        cout << distance+1 << endl;
    }

    return 0;
}
