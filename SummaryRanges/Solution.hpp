#include <iostream>
#include <vector>
#include <string>

class Solution
{
public:
    std::string createString(int begin, int end)
    {
        if (begin == end)
        {
            return std::to_string(begin);
        }
        else
        {
            std::string s = std::to_string(begin) + "->" + std::to_string(end);
            return s;
        }
    }
    std::vector<std::string> summaryRanges(std::vector<int>& nums)
    {
        std::vector<std::string> myVec;
        if (nums.empty())
        {
            return myVec;
        }
        else if (nums.size() == 1)
        {
            myVec.push_back(createString(nums[0], nums[0]));
            return myVec;
        }

        int current = nums[0];
        int start = nums[0];
        int stop = nums[0];

        for (auto it = nums.begin() + 1; it != nums.end(); it++)
        {
            if (*it == current + 1)
            {
                stop = *it;
            }
            else
            {
                myVec.push_back(createString(start, stop));
                start = *it;
                stop = *it;
            }
            current = *it;
            if (it == nums.end() - 1)
            {
                myVec.push_back(createString(start, stop));
            }
        }
        return myVec;
    }
};