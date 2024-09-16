/*
334. Increasing Triplet Subsequence

Given an integer array nums, return true if there exists a triple of indices (i, j, k) such that i < j < k and nums[i] < nums[j] < nums[k]. If no such indices exists, return false.
*/

#include "IncreasingTriplet.hpp"
#include <vector.h>

 bool increasingTriplet(vector<int>& nums) {
        if(nums.size() < 3){
            return false;
        }
        int a = nums[0], b = 2147483647;
        for(int i = 1; i < nums.size(); i++){
            if(nums[i] < a){
                a = nums[i];
            }
            else if(nums[i] > a && nums[i] < b){
                b = nums[i];
            }
            else if(nums[i] > b){
                return true;
            }
        }
        return false;
    }