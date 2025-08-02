
class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.length()&&s[i]==' ')
        {
           
            i++;
        }
        if(i>=s.length())
        return 0;
        int sign=1;
        long ans=0;
        if(s[i]=='-')
        {
        sign=-1;
        i++;
        }
        else if(s[i]=='+')
        {
            i++;
        }

        int min=INT_MIN,max=INT_MAX; 
        while(i<s.length()&&isdigit(s[i]))
        {
   
              ans=ans*10+(s[i]-'0');
              if(sign==-1&&(-1*ans)<min)
            return min;
             if(sign==1&&(ans*1)>max)
             return max;
             i++;

        }
        return (int)(sign*ans);
        
    }
};


// class Solution {
// public:
//     int myAtoi(string s) {
//         int i = 0;
//         // 1. Skip leading whitespaces
//         while (i < s.length() && s[i] == ' ') {
//             i++;
//         }

//         // If string is all spaces
//         if (i >= s.length()) return 0;

//         // 2. Handle sign
//         int sign = 1;
//         if (s[i] == '-') {
//             sign = -1;
//             i++;
//         } else if (s[i] == '+') {
//             i++;
//         }

//         // 3. Convert digits to integer
//         long ans = 0;
//         while (i < s.length() && isdigit(s[i])) {
//             ans = ans * 10 + (s[i] - '0');

//             // 4. Clamp to 32-bit signed int
//             if (sign == -1 && -1 * ans < INT_MIN) return INT_MIN;
//             if (sign == 1 && ans > INT_MAX) return INT_MAX;

//             i++;
//         }

//         return static_cast<int>(sign * ans);
//     }
// };
