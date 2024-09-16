/*
643. Maximum Average Subarray I

You are given an integer array nums consisting of n elements, and an integer k.

Find a contiguous subarray whose length is equal to k that has the maximum average value and return this value. Any answer with a calculation error less than 10-5 will be accepted.
*/

#include "FindMaxAverage.hpp"
#include <vector.h>

double findMaxAverage(vector<int>& nums, int k) {
        double currentSum = 0.0;
        for(int i = 0; i < k; i++){
            currentSum += nums[i];
        }
        double maxSum = currentSum;
        for(int i = k; i < nums.size(); i++){
            currentSum += nums[i] - nums[i - k];
            if(currentSum > maxSum){
                maxSum = currentSum;
            }
        }
        return maxSum / k;
    }