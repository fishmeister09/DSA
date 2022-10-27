// naive solution
int search(int arr[], int x)
{
    int i = 0;
    while (true)
    {
        if (arr[i] == x)
            return i;
        if (arr[i] > x)
            return -1;
        i++;
    }
}

// efficient solution with binary search

int effSearch(int arr[], int x)
{
    if (arr[0] == x)
        return 0;
    int i = 1;
    while (arr[i] < x)
    {
        i = i * 2;
    }
    if (arr[i] == x)
        return i;
    //     binarySearch(arr, target, low, high); //used low+1 because we started from 1 not 0
    return binarySearch(arr, x, i / 2 + 1, i);
}
