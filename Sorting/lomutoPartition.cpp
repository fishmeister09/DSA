int lPartition(vector<int> arr, int l, int h)
{
    int pivot = arr[h]; // assume pivot is always the last

    // if pivot is not the last element just swap the pivot with last element rest is same

    int i = l - 1; //-1 initially
    for (int j = l; j <= h - 1; j++)
    {
        if (arr[j] < pivot)
        {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[h]); // i will be the last smallest element, which is smaller than pivot
    return (i + 1);
}