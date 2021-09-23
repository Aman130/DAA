#include <bits/stdc++.h>

using namespace std;

int lowerBound(int arr[],int low,int high,int val)
{
    
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<val){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return high;
}
int upperBound(int arr[],int low,int high,int val)
{
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]<=val){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return low;
}
int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        int cmp=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int f;
        cin>>f;
        int l=lowerBound(arr,0,n-1,f);
        int r=upperBound(arr,0,n-1,f);
        if(r-l-1==0) cout<<"Not Present";
        else cout<<"Present "<<r-l-1<<"\n";
    }
    return 0;
}