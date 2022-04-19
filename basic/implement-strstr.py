def strstr(s,x):
    #code here
    arr=[s[i:j] for i in range(len(s)) for j in range(i+1,len(s)+1)]
    # print (arr)
    if x in arr:
        res = s.index(x)
        return res
    else:
        return -1
#{ 
#  Driver Code Starts
#Contributed by : Nagendra Jha

import atexit
import io
import sys

_INPUT_LINES = sys.stdin.read().splitlines()
input = iter(_INPUT_LINES).__next__
_OUTPUT_BUFFER = io.StringIO()
sys.stdout = _OUTPUT_BUFFER

@atexit.register

def write():
    sys.__stdout__.write(_OUTPUT_BUFFER.getvalue())

if __name__ == '__main__':
    t=int(input())
    for cases in range(t):
        s,p =input().strip().split()
        print(strstr(s,p))


# } Driver Code Ends
