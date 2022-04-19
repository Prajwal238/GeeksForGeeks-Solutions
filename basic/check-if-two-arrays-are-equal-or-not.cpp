//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:

    //Function to check if two arrays are equal or not.
    bool check(vector<ll> A, vector<ll> B, int N) {
        //code here
        map<int,int> mp;
        // int max=0;
        // int max2=0;
        // for(int i=0;i<A.size();i++){
        //     if(A[i]>max)
        //         max = A[i];
        // }
        // for(int i=0;i<B.size();i++){
        //     if(B[i]>max2)
        //         max = B[i];
        // }
        // vector<int> h1[max] = {0};
        // vector<int> h2[max2] = {0};
        
        for(int i =0;i<N;i++){
            mp[A[i]]++;
        }
        for(int i=0;i<N;i++){
            if(mp[B[i]] < 1){
                return 0;
            }
            mp[B[i]]--;
        }
        return 1;
    }
};

// { Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        
        vector<ll> arr(n,0),brr(n,0);
        
        // increase the count of elements in first array
        for(ll i=0;i<n;i++)
            cin >> arr[i];
        
        
        // iterate through another array
        // and decrement the count of elements
        // in the map in which frequency of elements
        // is stored for first array
        for(ll i=0;i<n;i++)
            cin >> brr[i];
        Solution ob;
        cout << ob.check(arr,brr,n) << "\n";
    }
	return 0;
}  // } Driver Code Ends
