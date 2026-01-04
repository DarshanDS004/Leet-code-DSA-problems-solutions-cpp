   /* Brute Force 
class Solution {
public:
  int is_exact(int nums){

    int count=0,sum=0;
    for(int i=1;i<=nums;i++)
    {
        if(nums%i==0)
        {
            count++;
            sum+=i;
        }
    }
    if(count==4)
    return sum;
    else return 0;
    
}
    int sumFourDivisors(vector<int>& nums) {
        int n=nums.size();
        int total=0;
        for(int i=0;i<n;i++){
            int ans=is_exact(nums[i]);
                total+=ans;
            

        }
     return total;
    }
};

*/

class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int total = 0;

        for (int i = 0; i < nums.size(); i++) {
            int x = nums[i];     
            int count = 0;
            int sum = 0;

            for (int j = 1; j * j <= x; j++) {
                if (x % j == 0) {
                    int k = x / j;

                    count++;
                    sum += j;

                    if (k != j) {
                        count++;
                        sum += k;
                    }

                    if (count > 4)
                        break;
                }
            }

            if (count == 4)
                total += sum;
        }

        return total;
    }
};
