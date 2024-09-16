/*
1456. Maximum Number of Vowels in a Substring of Given Length

Given a string s and an integer k, return the maximum number of vowel letters in any substring of s with length k.

Vowel letters in English are 'a', 'e', 'i', 'o', and 'u'.
*/

#include "MaxVowels.hpp"
#include <string.h>

bool isVowel(char letter);

int maxVowels(string s, int k) {
        int max = 0, windowStart = 0, countVowels = 0;
        for(int windowEnd = 0; windowEnd < s.size(); windowEnd++){
            if(isVowel(s[windowEnd])){
                countVowels++;
            }
            if(windowEnd >= k - 1){
                if(countVowels > max){
                    max = countVowels;
                }
                if(isVowel(s[windowStart++])){
                    countVowels--;
                }
            }
        }
        return max;
    }
bool isVowel(char letter){
        if(letter == 'a'
            || letter == 'e'
            || letter == 'i'
            || letter == 'o'
            || letter == 'u'
        ){
            return true;
        }
        else return false;
}