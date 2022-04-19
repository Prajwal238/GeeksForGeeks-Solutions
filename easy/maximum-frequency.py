
class Solution():
    def solve(self, n, y, A):
        #your code goes here
        #3,1,4,5
        h = {}
        for i in range(0,n):
            if(A[i] in h.keys()):
                h[A[i]] += 1
            else:
                h[A[i]] = 1
        count = 0
        res = -1
        for i in h:
            if(count<h[i]):
                res = i
                count = h[i]
        return count

#{ 
#  Driver Code Starts
#Initial Template for Python 3

if __name__ =="__main__":
    for _ in range(int(input())):
        n,y=map(int,input().split())
        A=[int(i) for i in input().split()]
        obj = Solution()
        print(obj.solve(n,y,A))
# } Driver Code Ends
