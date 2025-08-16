/*
class Solution {
public:
    int maximum69Number (int num) {
      /*  string s=to_string(num);
        for(char &ch:s)
        {
            if(ch=='6')
            {
                ch='9';
                break;
            }
        }
        return stoi(s);
        
    } 
};
*/

class Solution {
public:
    int maximum69Number(int num) {
        int n = num;
        int i = 1;
        int rev = 0;

        while (n > 0) {
            rev = rev * 10 + n % 10;
            n /= 10;
            i *= 10;
        }

        while (rev % 10 == 9) {
            rev /= 10;
            i /= 10;
        }

        return num + 3 * (i / 10);
    }
};