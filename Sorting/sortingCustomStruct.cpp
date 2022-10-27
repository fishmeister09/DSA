// sorting with own comparision funtion

#include <bits/stdc++.h>
using namespace std;

struct Point
{
    int x, y;
};

bool myComp(Point p1, Point p2)
{
    return (p1.x < p2.x); // increasing order of x value

    // return(p1.y>p2.y) //decreaing order of y value
}
int main()
{
    Point arr[] = {{3, 10}, {2, 8}, {5, 4}};

    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n, myComp);

    for (auto i : arr)
        cout << i.x << " " << i.y << endl;
}