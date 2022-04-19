#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends


class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    { 
        int n=s.length();
        map<char,char>m;
        
        stack <char>st;
        m['(']=')';
        m['{']='}';
        m['[']=']';
        for(int i=0;i<n;i++)
        {
             
            if(s[i]=='(' || s[i]=='{' || s[i]=='[' )
            st.push(s[i]);
            else if(s[i]==')' || s[i]=='}' || s[i]==']')
            { 
                if(st.empty())
                return 0;
                if(s[i]!=m[st.top()])
                return 0;
                st.pop();
            }
        
            
        }
        if(st.empty())
        return 1;
        return 0;
    }

};

// { Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}  // } Driver Code Ends
