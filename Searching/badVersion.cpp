// The API isBadVersion is defined for you.
bool isBadVersion(int version);

class Solution
{
public:
    int firstBadVersion(int n)
    {
        int mid;
        int low = 0, high = n - 1;
        while (low <= high)
        {
            int mid = (low + high) / 2;
            std::cout << mid << " ";
            if (isBadVersion(mid) && isBadVersion(mid - 1))
            {
                high = mid - 1;
            }
            else if (isBadVersion(mid) && !isBadVersion(mid - 1))
            {
                return mid;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
};