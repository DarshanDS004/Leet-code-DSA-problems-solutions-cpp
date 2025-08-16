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

/*
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

*/
class Solution {
public:
    int maximum69Number (int num) {
        int temp = num, pos = -1, idx = 0;
        while (temp > 0) {
            if (temp % 10 == 6)
             pos = idx;
            temp /= 10;
            idx++;
        }
        if (pos != -1)
         num += 3 * pow(10, pos);
        return num;
    }
};