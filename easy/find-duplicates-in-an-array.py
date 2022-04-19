
class Solution:
    def duplicates(self, arr, n): 
        dict = {}
        count = -1
        res=[]
        for i in arr:
            try:
                dict[i]+=1
            except:
                dict[i]=1
                
        for ele in dict:
            if dict[ele] > 1:
                res.append(ele)
                count+=1
        if(count == -1):
            res.append(-1)
        res.sort()
        return res

#{ 
#  Driver Code Starts
if(__name__=='__main__'):
    t = int(input())
    for i in range(t):
        n = int(input())
        arr = list(map(int, input().strip().split()))
        res = Solution().duplicates(arr, n)
        for i in res:
            print(i,end=" ")
        print()



# } Driver Code Ends
