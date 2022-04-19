//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
  public:
    /*You are required to complete this method */
    int atoi(string str) {
        //Your code here
        int temp = 0;
        for(int i=0;i<str.length();i++){
            if((str[i]>=48 && str[i]<=57) || (str[i] == '-' && i==0)){
               if(str[0]=='-')
               {
                   temp*=10;
                   if(str[i]=='-')temp*=-1;
                   else temp-=(str[i]-'0');
               }
               else{
                   temp = temp * 10 + (str[i] - '0');
               }
                
            }
            else{
                return -1;
            }
        }
        return temp;
    //     try {
    //     int temp = 0;
    //     for(int i=0;i<str.length();i++){
    //         temp = temp * 10 + (str[i] - '0');
    //     }
    //     return temp;
    // }
    // catch (int myNum) {
    // return -1;
    
    }
    
};

// { Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}  // } Driver Code Ends
