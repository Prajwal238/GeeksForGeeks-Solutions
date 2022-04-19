// Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

 // } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int isGoodorBad(string S) {
        // code here
        
        int c_count = 0;
        int v_count = 0;
        
        for(int i =0; i<S.length();i++){
            
            if(v_count>5 || c_count>3){
                return 0;
            }
            
            if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u'){
                
                c_count = 0;
                v_count ++;
            }
            else if(S[i]=='?'){
                c_count++;
                v_count++;
            }
            else{
                
                c_count++;
                v_count = 0;
            }
        }
       return 1; 
    }
};

// { Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S;
        
        cin >> S;
        
        Solution ob;
        cout << ob.isGoodorBad(S) << endl;
    }
    return 0; 
}  // } Driver Code Ends
