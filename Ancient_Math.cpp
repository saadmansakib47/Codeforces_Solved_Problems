#include <bits/stdc++.h>
using namespace std;

int main()
{
    double radius;
    cin >> radius;

    double area_circle = 3.1415926535 * radius * radius;
    double side_length_square = sqrt(area_circle);

    printf("%.10f\n", side_length_square);

    return 0;
}
