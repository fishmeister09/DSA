class Solution
{
public:
    int removeElement(vector<int> &nums, int val)
    {
        int res = 0;
        for (int i = 0; i < nums.size(); ++i)
        {
            if (nums[i] == val)
                res++;
            else
                nums[i - res] = nums[i];
        }
        return nums.size() - res;
    }
};