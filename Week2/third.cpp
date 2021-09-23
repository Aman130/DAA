#include <bits/stdc++.h>

using namespace std;

int bs(int a[],int l,int r,int sum){
    while(l<=r){
        int mid=(l+r)/2;
        if(a[mid]==sum) return mid;
        else if(a[mid]>sum) r=mid-1;
        else l=mid+1;
    }
    return -1;
}

int main()
{
    int t;
    cin>> t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f=0;
        sort(a,a+n);
        int cnt=0;
        for(int i=0;i<n;i++){
            int sum=a[i]+k;
            int p=bs(a,0,n-1,sum);
            if(p!=-1 && p!=i){
                cnt++;
            }
            while(i+1<n && a[i]==a[i+1]) i++;
        }
        cout<<cnt<<"\n";
    }
    return 0;
}