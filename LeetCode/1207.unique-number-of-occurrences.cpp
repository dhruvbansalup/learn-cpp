/*
 * @lc app=leetcode id=1207 lang=cpp
 *
 * [1207] Unique Number of Occurrences
 *
 * https://leetcode.com/problems/unique-number-of-occurrences/description/
 *
 * algorithms
 * Easy (77.54%)
 * Likes:    5122
 * Dislikes: 141
 * Total Accepted:    703.7K
 * Total Submissions: 907.5K
 * Testcase Example:  '[1,2,2,1,1,3]'
 *
 * Given an array of integers arr, return true if the number of occurrences of
 * each value in the array is unique or false otherwise.
 *
 *
 * Example 1:
 *
 *
 * Input: arr = [1,2,2,1,1,3]
 * Output: true
 * Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two
 * values have the same number of occurrences.
 *
 * Example 2:
 *
 *
 * Input: arr = [1,2]
 * Output: false
 *
 *
 * Example 3:
 *
 *
 * Input: arr = [-3,0,1,-3,1,1,1,-3,10,0]
 * Output: true
 *
 *
 *
 * Constraints:
 *
 *
 * 1 <= arr.length <= 1000
 * -1000 <= arr[i] <= 1000
 *
 *
 */

// @lc code=start
#include <vector>
#include <iostream>
using namespace std;

class Solution
{
public:
    bool checkUnique(vector<int> arr, int key)
    {
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] == key)
            {
                return true;
            }
        }
        return false;
    }

    bool uniqueOccurrences(vector<int> &arr)
    {
        vector<int> sizes;

        for (int i = 0; i < arr.size(); i++)
        {
            int count = 0;
            if (arr[i] != -2000)
            {
                for (int j = i; j < arr.size(); j++)
                {
                    if (arr[i] == arr[j])
                    {
                        count++;
                        arr[j] = -2000;
                    }
                }

                if (checkUnique(sizes, count))
                {
                    return false;
                }
                else
                {

                    sizes.push_back(count);
                }
            }
        }
        return true;
    }
};
// @lc code=end
