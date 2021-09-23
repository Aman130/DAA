#include <bits/stdc++.h>

using namespace std;

void bs(int arr[],int low,int high,int val,int comparison)
{
    int flag=0;
    while(low<=high){
        int mid=(low+high)/2;
        comparison+=1;
        if(arr[mid]==val){
            flag=1;
            break;
        }
        else if(arr[mid]<val){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    if(flag==1){
        cout<<"Present "<<comparison<<"\n";
    }
    else{
        cout<<"Not Present"<<" "<<comparison<<"\n";
    }
}

void exponentialSearch(int arr[], int n, int val)
{
    int comparison=1;
    if (arr[0] == val)
    {
        cout<<"Present 1"<<"\n";
        return;
    }
    int i = 1;
    while(i<n && arr[i]<val)
    {
        comparison++;
        i *= 2;
    }
    bs(arr,i/2,min(n-1,i),val,comparison);
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
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int f;
        cin>>f;
        exponentialSearch(arr,n,f);
    }
    return 0;
}