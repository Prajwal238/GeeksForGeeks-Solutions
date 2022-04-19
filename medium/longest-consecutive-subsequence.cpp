#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_map<int,int> map;
      int max = 1;
      for(int i=0;i<N;i++){
          map[arr[i]]++;
      }
      for(int i=0;i<N;i++){
          if(map.find(arr[i]-1) == map.end()){
              int val = arr[i];
              int count = 1;
              while(map.find(val+1) != map.end()){
                  count++;
                  if(count>max){
                      max = count;
                  }
                  val++;
              }
          }
      }
      return max;
    }
};

// { Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}  // } Driver Code Ends
