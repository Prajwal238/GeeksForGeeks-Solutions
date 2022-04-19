#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> uniqueNumbers(int L,int R)
    {
        // Write Your Code here
        vector<int> res;
        while(L<=R){
            string str = to_string(L);
            set<int> unitdigit(str.begin(),str.end());
            if(str.size()==unitdigit.size()){
                res.push_back(L);
            }
            L++;
        }
        return res;
    }
};

// { Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l,r ;
        cin >> l >> r;
		Solution ob;
		vector<int> numbers = ob.uniqueNumbers(l,r);
		
		for(int num : numbers){
		   cout<<num<<" ";
		}
		cout<<endl;
        
    }
    return 0;
}  // } Driver Code Ends
