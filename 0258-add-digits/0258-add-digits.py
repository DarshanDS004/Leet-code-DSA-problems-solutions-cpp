class Solution:
    def addDigits(self, num: int) -> int:
        while num>=10:
            n=num
            sum=0
            while n!=0:
                sum+=n%10
                n//=10
            num=sum
        return num

        


        