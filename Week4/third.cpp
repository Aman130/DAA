#include <bits/stdc++.h>

using namespace std;
int findKSmallest(int arr[], int l, int h, int k)
{
    int p = arr[h], i = l - 1, j = l;
    for(;j<=h;j++)
    {
        if(arr[j]<=p)
        {
            int t=arr[++i];
            arr[i]=arr[j];
            arr[j]=t;
        }
    }
    if(i==k) return arr[i];
    else if(i<k) return findKSmallest(arr,i+1,h,k);
    else return findKSmallest(arr,l,i-1,k);
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k;
        cin>>k;
        k=k<=n?k-1:n-1;
        cout<<findKSmallest(a,0,n-1,k)<<"\n";
        
    }
    return 0;
}