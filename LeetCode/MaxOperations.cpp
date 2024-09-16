/*
1679. Max Number of K-Sum Pairs

You are given an integer array nums and an integer k.

In one operation, you can pick two numbers from the array whose sum equals k and remove them from the array.

Return the maximum number of operations you can perform on the array.
*/

#include "MaxOperations.hpp"
#include <vector.h>

int maxOperations(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int left_index = 0, right_index = nums.size() - 1;
        int count_operations = 0;
        while(left_index < right_index){
            if(nums[left_index] + nums[right_index] == k){
                count_operations++;
                left_index++;
                right_index--;
            }
            else if(nums[left_index] + nums[right_index] > k){
                right_index--;
            }
            else{
                left_index++;
            }
        }
        return count_operations;
    }