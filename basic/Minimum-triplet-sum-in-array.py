
class Solution:
    def maxTripletSum (self, arr,  n) : 
        #Complete the function
        arr.sort()
        sumo = arr[n-1]+arr[n-2]+arr[n-3]
        return sumo

#{ 
#  Driver Code Starts
#Initial Template for Python 3


for _ in range(0,int(input())):
    
    n = int(input())
    arr = list(map(int,input().strip().split()))
    ob=Solution()
    res = ob.maxTripletSum(arr, n)
    print(res)



# } Driver Code Ends
