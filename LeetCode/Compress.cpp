/*
443. String Compression

Given an array of characters chars, compress it using the following algorithm:

Begin with an empty string s. For each group of consecutive repeating characters in chars:

   - If the group's length is 1, append the character to s.
   - Otherwise, append the character followed by the group's length.

The compressed string s should not be returned separately, but instead, be stored in the input character array chars. Note that group lengths that are 10 or longer will be split into multiple characters in chars.

After you are done modifying the input array, return the new length of the array.

You must write an algorithm that uses only constant extra space.
*/

#include "Compress.hpp"
#include <string.h>

std::string operation(int temp);

int compress(vector<char>& chars) {
        
        int count=0,n=chars.size(),temp=1;
        if(chars.size()==1)
        	return 1;
        std::string ans="";
        ans+=chars[0];
        for(int i=1;i<n;i++)
        {
            if(chars[i]==ans[ans.length()-1])
            {
                temp++;
            }
            else
            {  
                ans+=operation(temp);
                ans+=chars[i];
                temp=1;
            }
        }
        
                ans+=operation(temp);
        count=ans.length();
    
        for(int i=0;i<count;i++)
        chars[i]=ans[i];
        return count;
    }

std::string operation(int temp)
   {
            std::string val="";
               int fl=0;
                while(temp>1)
                {
                    int t=temp%10;
                    val+=to_string(t);
                    temp=temp/10;
                    fl=1;
                }
                 if(fl==1 && temp>0)
                {
                    val+=to_string(temp);
                }
                reverse(val.begin(),val.end());
    return val;
   }