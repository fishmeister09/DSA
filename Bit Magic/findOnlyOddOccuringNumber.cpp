// example:
// arr[]=[4,3,4,5,5,5,5]
// o/p= 3
#include <iostream>
void OnlyOddOccuringNumber(int arr[], int);
int usingXor(int arr[], int n);

int main()
{
    int arr1[] = {5, 5, 4, 3, 3, 2, 2, 2, 2};
    int size = sizeof(arr1) / sizeof(arr1[0]);
    std::cout << size;
    OnlyOddOccuringNumber(arr1, size);
    std::cout << (3 ^ 5);
}

void OnlyOddOccuringNumber(int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        int count = 0;

        for (int j = 0; j < n; j++)
        {

            if (arr[j] == arr[i])
                count++;
        }

        if (count % 2 != 0)
            std::cout << arr[i];
    }
}

// using xor gate
int usingXor(int arr[], int n)
{
    int res = 0;
    for (int i = 0; i < n; i++)
    {
        res = res ^ arr[i];
    }
    return res;
}
