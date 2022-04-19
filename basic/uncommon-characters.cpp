#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            bool strA[26],strB[26];
            for(int i=0;i<26;i++){
                strA[i] = false;
                strB[i] = false;
            }
            for(int i=0;i<A.length();i++){
                strA[A[i]-97] = true;
            }
            for(int i=0;i<B.length();i++){
                strB[B[i]-97] = true;
            }
            string res="";
            for(int i=0;i<26;i++){
                if(strA[i]!=strB[i] && (strA[i]==false||strB[i]==false)){
                    res+='a'+i;
                }
            }
            if(res==""){
                return "-1";
            }
            else{
                return res;
            }
        }
};



// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}  // } Driver Code Ends
