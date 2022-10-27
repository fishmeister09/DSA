int coutOcc(int arr[], int n, int target) // returns the number of occurances of a target value
{
    int first = firstOcc(arr, n, target);
    if (first == -1)
    {
        return 0; // means no value is found int the array
    }
    else
    {
        return (lastOcc(arr, n, x) - first + 1);
    }
}