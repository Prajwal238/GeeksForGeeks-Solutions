
class Solution:
    def isCircularPrime(self, n):
        # Code here
        temp = len(str(n))
        i = len(str(n))
        arr=[]
        isPrime = True
        if(temp==1):
            arr.append(n)
        else:
            while(i>0):
                m = n % 10
                n=(n//10)+(m*(10**(temp-1)))
                i-=1
                arr.append(n)
                
        # print(arr)
        for num in arr:
            
            if(num==1):
                isPrime = False
            if(num==2):
                isPrime = True
            else:
                for i in range(2,num//2 + 1):
                    
                    
                    if(num%i==0):
                        # print(num,i)
                        isPrime = False
                        break;
        if(isPrime):
            return 1
        return 0
        
#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T=int(input())
    for i in range(T):
        n = int(input())
        ob = Solution()
        ans = ob.isCircularPrime(n)
        print(ans)
# } Driver Code Ends
