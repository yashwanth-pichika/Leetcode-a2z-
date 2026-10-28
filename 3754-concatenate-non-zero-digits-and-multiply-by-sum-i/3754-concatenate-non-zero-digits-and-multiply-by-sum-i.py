class Solution:
    def sumAndMultiply(self, n: int) -> int:
        res=0
        sum=0
        while(n!=0):
            a=n%10
            n=n//10

            if a!=0:
                res=res*10+a
                sum+=a
        rev=0
        while res > 0:
            digit = res % 10
            rev = rev * 10 + digit
            res //= 10
        return rev*sum