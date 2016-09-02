#pragma once
#include<vector>

class TwoSumOfSortedArray {
public:
	std::vector<int> twoSum(std::vector<int>& numbers, int target) {
		std::vector<int> res;
		if (numbers.size() <2)
			return res;
		int low = 0, high = numbers.size() - 1, temp;
		while (low <high) {
			temp = numbers[low] + numbers[high];
			if (temp == target) {
				res.push_back(low + 1),
					res.push_back(high + 1);
				return res;
			}
			else if (temp >target)
				high--;
			else
				low++;
		}
		return res;
	}
} TwoSumII;