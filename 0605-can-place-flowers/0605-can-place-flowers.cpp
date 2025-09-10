// class Solution {
// public:
//     bool canPlaceFlowers(vector<int>& flowerbed, int n) {
//         int p=flowerbed.size();
//         for(int i=0;i<p-1;i++)
//         {
//           if(flowerbed[i]==0)
//           {
//              bool left=(i==0||flowerbed[i-1]==0);
//              bool right=(i==p-1||flowerbed[i+1]==0);

//              if(left&&right)
//              {
//                 flowerbed[i]=1;
//                 n--;
//                 if(n==0)
//                 return true;
//              }

//           }
//         }
//        return n <= 0;

        
//     }
// };


#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int size = flowerbed.size();
        
        for (int i = 0; i < size; i++) {
            // If current spot is empty
            if (flowerbed[i] == 0) {
                // Check left and right neighbors
                bool leftEmpty = (i == 0 || flowerbed[i - 1] == 0);
                bool rightEmpty = (i == size - 1 || flowerbed[i + 1] == 0);
                
                if (leftEmpty && rightEmpty) {
                    // Plant a flower
                    flowerbed[i] = 1;
                    n--;
                    
                    if (n == 0) return true;
                }
            }
        }
        
        return n <= 0;
    }
};

