/*
238. Product of Array Except Self

Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

You must write an algorithm that runs in O(n) time and without using the division operation.
*/

#include "ProductExceptSelf.hpp"
#include <vector.h>

vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> answer(n);
        vector<int> left_product(n);
        vector<int> right_product(n);

        left_product[0] = 1;
        for(int i = 1; i < n; i++){
            left_product[i] = left_product[i - 1] * nums[i - 1];
        }

        right_product[n - 1] = 1;
        for(int i = n - 2; i >= 0; i--){
            right_product[i] = right_product[i + 1] * nums[i + 1];
        }

        for(int i = 0; i < n; i++){
            answer[i] = left_product[i] * right_product[i];
        }

        return answer;
    }