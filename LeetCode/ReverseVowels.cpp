/*
345. Reverse Vowels of a String

Given a string s, reverse only all the vowels in the string and return it.

The vowels are 'a', 'e', 'i', 'o', and 'u', and they can appear in both lower and upper cases, more than once.
*/

#include "ReverseVowels.hpp"
#include <string.h>

std::string reverseVowels(std::string s) {
        vector<int> indexes;
        for(int i = 0; i < s.size(); i++){
            if(s[i] == 'a'
                || s[i] == 'e'
                || s[i] == 'i'
                || s[i] == 'o'
                || s[i] == 'u'
                || s[i] == 'A'
                || s[i] == 'E'
                || s[i] == 'I'
                || s[i] == 'O'
                || s[i] == 'U'){
                indexes.push_back(i);
            }
        }
        if(indexes.size() < 2){
            return s;
        }

        int start_index = 0, end_index = indexes.size() - 1;
        while(true){
            char temp = s[indexes[start_index]];
            s[indexes[start_index]] = s[indexes[end_index]];
            s[indexes[end_index]] = temp;
            start_index++;
            if(start_index == end_index){
                break;
            }
            end_index--;
            if(start_index == end_index){
                break;
            }
        }
        return s;
    }