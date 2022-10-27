#include <iostream>
int Missing(int arr[], int);
int main()
{
    int array[] = {1, 4, 3};
    int size = sizeof(array) / sizeof(array[0]);

    std::cout << Missing(array, size);
}

int Missing(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }

    for (int i = 0; i <= n + 1; i++)
    {
        res = res ^ i;
    }
    return res;
}