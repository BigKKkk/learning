#include <iostream>
#include <vector>
#include <unordered_map>

#define DEBUG

/**
   unordered_map内部实现了一个哈希表，其元素的排列顺序是杂乱的、无序的

   advantage: 内部实现了哈希表 因此查找速度非常的快

   shortcoming：哈希表的建立比较耗费时间
*/


class Solution
{
public:
	std::vector<int> TwoSum(std::vector<int> &numbers, int target)
	{
		std::unordered_map<int, int> mp;

		std::vector<int> ans;

		// 遍历vector容器
		for (int i = 0; i < numbers.size(); i++)
		{
			// 判断target-numbers[i]在不在
			// 如果存在这样的数
			if (mp.count(target - numbers[i]) == true)
			{
				ans.push_back(mp[target - numbers[i]] + 1);
				ans.push_back(i + 1);
				break;
			}
			// if (mp.count(numbers[i]) != true)
			else
			{
				mp[numbers[i]] = i;
			}
		}
		return ans;
	}
};

#ifdef DEBUG
int main(void)
{

	std::vector<int> numbers = { 3,7,0,2,4 };
	int target = 6;
	Solution solut = Solution();
	std::cout << "[" << solut.TwoSum(numbers, target)[0] << "," << std::endl;
	std::cout << solut.TwoSum(numbers, target)[1] << "]" << std::endl;

}
#endif