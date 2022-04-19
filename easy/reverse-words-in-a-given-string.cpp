#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        vector<string> v;
        string str = "";
        for(int i =0;i<S.length();i++){
            if(S[i]=='.'){
                v.push_back(str);
                v.push_back(".");
                str="";
            }
            else{
                str+=S[i];
            }
        }
        v.push_back(str);
        if(v.size() == 2){
            cout << v[1] <<".";
        }
        else{
            for(int i=v.size()-1;i>=0;i--){
            cout << v[i];
            }
        }
        // cout<<'.'<<endl;
        
    } 
};

// { Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}  // } Driver Code Ends
