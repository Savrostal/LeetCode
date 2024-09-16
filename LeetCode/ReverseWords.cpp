/*
151. Reverse Words in a String

Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.
*/

#include "ReverseWords.hpp"
#include <string.h>
#include <vector.h>
#include <sstream>

vector<std::string> stringSplit(std::string s);
std::string wordsConcat(vector<std::string> v);

std::string reverseWords(std::string s) {
        vector<std::string> v = stringSplit(s);
        int start_index = 0, end_index = v.size() - 1;
        while(true){
            string tmp = v[start_index];
            v[start_index] = v[end_index];
            v[end_index] = tmp;
            start_index++;
            if(start_index >= end_index){
                break;
            }
            end_index--;
            if(start_index == end_index){
                break;
            }
        }
        return wordsConcat(v);
    }

    vector<std::string> stringSplit(std::string s){
        vector<std::string> res;
        std::string word = "";
        std::istringstream is(s);
        while (is >> word) res.push_back(word);
        return res;
    }

    std::string wordsConcat(vector<std::string> v){
        std::string res = v[0];
        for(int i = 1; i < v.size(); i++){
            res += " " + v[i];
        }
        return res;
    }