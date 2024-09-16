/*
283. Move Zeroes

Given an integer array nums, move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Note that you must do this in-place without making a copy of the array.
*/

#include "MoveZeroes.hpp"
#include <vector.h>

void moveZeroes(vector<int>& nums) {
        int left = 0;
        for(int right = 0; right < nums.size(); right++){
            if(nums[right] != 0){
                int tmp = nums[right];
                nums[right] = nums[left];
                nums[left] = tmp;
                left++;
            }
        }
        
    }