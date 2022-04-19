
int transitionPoint(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], i;
        for (i = 0; i < n; i++) {
            cin >> a[i];
        }
        cout << transitionPoint(a, n) << endl;
    }
    return 0;
}// } Driver Code Ends


int transitionPoint(int arr[], int n) {
    // code here
    int count0= 0;
    int count1=0;
    for(int i =0;i<n;i++)
    {
    if(arr[i]==0)
    count0++;
    else
    count1++;
    }
    if(count1!=0)
    return count0;
    else
    return -1;
    
}
