//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int l, int mid, int r)
    {
         int i = l;
         int j = mid+1;
         int f = l;
         int temp[100000];
         
         while(i<=mid && j<=r)
         {
             if(arr[i]<arr[j])
             {
                 temp[f] = arr[i];
                 i++;
             }
             else
             {
                 temp[f] = arr[j];
                 j++;
             }
             
             f++;
         }
         
         if(i>mid)
         {
             while(j<=r)
             {
                 temp[f] = arr[j];
                 f++;
                 j++;
             }
         }
         else
         {
             while (i <= mid) {
                temp[f] = arr[i]  ;
                f++ ; i++ ;
            }
         }
         
         for(int f=l;f<=r;f++)
         {
             arr[f] = temp[f];
         }
         
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        if(l<r)
        {
            int mid = (l+r)/2;
            mergeSort(arr,l,mid);
            mergeSort(arr,mid+1,r);
            merge(arr,l,mid,r);
        }
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends