/*
11. Container With Most Water

You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.
*/

#include "MaxArea.hpp"
#include <vector.h>

int maxArea(vector<int>& height) {
        int max = 0, leftIndex = 0, rightIndex = height.size() - 1;
        while(leftIndex != rightIndex){
            if(height[leftIndex] <= height[rightIndex]){
                int x = rightIndex - leftIndex;
                int area = x * height[leftIndex++];
                if(area > max){
                    max = area;
                }
            }
            else{
                int x = rightIndex - leftIndex; 
                int area = x * height[rightIndex--];
                if(area > max){
                    max = area;
                }
            }
        }
        return max;
    }