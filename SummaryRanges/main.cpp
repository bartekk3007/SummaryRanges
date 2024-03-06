#include <iostream>
#include <vector>
#include <string>
#include "Solution.hpp"

int main()
{
	std::vector<int> nums = {0, 1, 2, 4, 5, 7};
	Solution s1;
	std::vector<std::string> results = s1.summaryRanges(nums);
	for (std::string elem : results)
	{
		std::cout << elem << '\n';
	}

	return 0;
}