/*
class Solution {
public:
    string reverseOnlyLetters(string s) {
        int n=s.length();
        int left=0,right=n-1;
        while(left<right)
        {
            if(isalpha(s[left])&&isalpha(s[right]))
            {
                swap(s[left],s[right]);
                left++;
                right--;
            }
            else if(!isalpha(s[left]))
            {
                left++;
            }

            else if(!isalpha(s[right]))
            {
                right--;
            }
           
        }

        return s;
        
    }
};
*/
/*
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string letters;

        // Step 1: Collect all letters
        for (char c : s) {
            if (isalpha(c)) {
                letters.push_back(c);
            }
        }

       
        int j = letters.length() - 1;  
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i])) {
                s[i] = letters[j--];  
        }
        }

        return s;
    }
};
*/

class Solution {
public:
    string reverseOnlyLetters(string s) {
        string letters;

        for (char c : s) {
            if (isalpha(c)) {
                letters.push_back(c);
            }
        }

        int j = letters.length() - 1;  
        for (int i = 0; i < s.length(); i++) {
            if (isalpha(s[i])) {
                s[i] = letters[j--];  
            }
        }

        return s;
    }
};
