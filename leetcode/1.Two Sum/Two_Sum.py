#!/usr/bin/env python
#coding=utf-8

"""
python3 
"""

class Solution:

    # @return a tuple, (index1, index2)
    def TwoSum(self, num, target):

        dict = {}
        for i in range(len(num)):
            if dict.get(target - num[i], None) == None:
                dict[num[i]] = i
            else:
                return (dict[target - num[i]] + 1, i + 1)

if __name__ == "__main__":
    num = [3, 2, 4]
    target = 8

    solution = Solution()
    print(solution.TwoSum(num, target))