/*
1431. Kids With the Greatest Number of Candies

There are n kids with candies. You are given an integer array candies, where each candies[i] represents the number of candies the ith kid has, and an integer extraCandies, denoting the number of extra candies that you have.

Return a boolean array result of length n, where result[i] is true if, after giving the ith kid all the extraCandies, they will have the greatest number of candies among all the kids, or false otherwise.

Note that multiple kids can have the greatest number of candies.
*/

#include "KidsWithCandies.hpp"
#include <vector>

vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result(candies.size());
        int maxCandies = 0;
        for(int c : candies){
            if(c > maxCandies){
                maxCandies = c;
            }
        }
        for(int i = 0; i < candies.size(); i++){
            result[i] = candies.at(i) + extraCandies >= maxCandies;
        }
        return result;
    }
