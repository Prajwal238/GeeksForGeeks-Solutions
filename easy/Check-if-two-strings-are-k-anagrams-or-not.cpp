//Initial template for C++

#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function template for C++

class Solution {
  public:
    bool areKAnagrams(string str1, string str2, int k) {
        // code here
        if(str1.length() != str2.length()){
            return false;
        }
        int flag = 0;
        int ha[26]={0};
        for(int i=0;i<str1.length();i++){
            ha[str1[i]-97]++;
        }
        for(int i=0;i<str2.length();i++){
            if(ha[str2[i]-97] > 0){
                ha[str2[i]-97]--;
            }
            else{
                flag++;
            }
        }
        if(flag<=k){
            return true;
        }
        return false;
    }
};

// { Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str1,str2;
		cin>>str1>>str2;
		int k;
		cin>>k;
		Solution ob;
		if(ob.areKAnagrams(str1, str2, k) == true)
			cout<<"1\n";
		else
			cout<<"0\n";
	}
}  // } Driver Code Ends
