class Solution {
public:
    vector<int> exchange(vector<int>& nums)
    {
        int i = 0, j = nums.size() - 1;
        while (i < j)
        {
            while(i < j && (nums[i] & 1) == 1) i++;
            while(i < j && (nums[j] & 1) == 0) j--;
            swap(nums[i], nums[j]);
        }
        return nums;
    }
};

class Solution {
public:
    vector<int> exchange(vector<int>& nums) {
        int j = nums.size()-1;
        int i = 0;
        while (i < j) { 
            if (nums[i] %2 == 0 && nums[j] %2 != 0) {
                swap(nums[i], nums[j]);
                i++; j--;
            }
            if (nums[i] %2 != 0) i++;
            if (nums[j] %2 == 0) j--;   
           
        }
        return nums;
    }
};

