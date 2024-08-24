/*
You are a professional robber planning to rob houses along a street. Each house has a certain amount of money stashed. All houses at this place are arranged in a circle. That means the first house is the neighbor of the last one. Meanwhile, adjacent houses have a security system connected, and it will automatically contact the police if two adjacent houses were broken into on the same night.
Given an integer array nums representing the amount of money of each house, return the maximum amount of money you can rob tonight without alerting the police.

Input Format:
First Line of input denotes the no. of houses in the street.
Second line of input denotes an array representing the amount of money of each house.

Output Format:
The maximum amount of money you can rob tonight without alerting the police.

Example 1:
Input: nums = [2,3,2]
Output: 3
Explanation: You cannot rob house 1 (money = 2) and then rob house 3 (money = 2), because they are adjacent houses.
Example 2:
Input: nums = [1,2,3,1]
Output: 4
Explanation: Rob house 1 (money = 1) and then rob house 3 (money = 3).
Total amount you can rob = 1 + 3 = 4.
Example 3:
Input: nums = [1,2,3]
Output: 3
 

Constraints:

1 <= nums.length <= 100
0 <= nums[i] <= 1000

Test Case 01:

Input: 
3
2 3 2
Output:
3

Test Case 02:

Input: 
4
1 2 3 1
Output:
4

*/

#include <stdio.h>
#include <stdlib.h>

int max(int a, int b) {
    return a > b ? a : b;
}

int robHelper(int* nums, int start, int end) {
    int prev1 = 0, prev2 = 0, current;
    for (int i = start; i <= end; i++) {
        current = max(prev1, prev2 + nums[i]);
        prev2 = prev1;
        prev1 = current;
    }
    return prev1;
}

int main() {
    int n;
    scanf("%d", &n);

    int* nums = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    if (n == 1) {
        printf("%d\n", nums[0]);
    } else {
        int rob1 = robHelper(nums, 0, n - 2); 
        int rob2 = robHelper(nums, 1, n - 1); 
        printf("%d\n", max(rob1, rob2));
    }

    free(nums);
    return 0;
}
