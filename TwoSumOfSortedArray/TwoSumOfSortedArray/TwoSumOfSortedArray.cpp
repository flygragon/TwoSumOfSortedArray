// TwoSumOfSortedArray.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"TwoSumOfSortedArray.h"
#include<algorithm>

int main()
{
	int n, target;
	std::cin >> n;
	std::vector<int> nums(n);
	for (int i = 0; i < n; std::cin >> nums[i++]);
	sort(nums.begin(), nums.end());
	std::cin >> target;
	std::vector<int> res = TwoSumII.twoSum(nums, target);
	if (res.empty())
		std::cout << "No Such Index" << '\n';
	else std::cout << res[0] << " " << res[1] << '\n';
	exit(0);
    return 0;
}

