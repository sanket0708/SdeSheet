//{ Driver Code Starts
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
      sort(arr,arr+N);
      int ans = 1;
      int prev = arr[0];
      int count = 1;
      
      for(int i=1;i<N;i++)
      {
          if(arr[i]==prev+1)
          {
              count++;
             
          }
          else if(arr[i]!=prev)
          {
              count = 1;
          }
          
          prev = arr[i];
          ans = max(ans,count);
          
      }
      
      return ans;
      
    }
};

//{ Driver Code Starts.
 
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
}
// } Driver Code Ends