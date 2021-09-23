#include <bits/stdc++.h>

using namespace std;
void merge(int a[],int l,int mid,int r,int &c,int &s){
    int a1[mid-l+1];
    int b1[r-mid];
    int i1=l,j1=mid+1;
    for(int i=0;i<mid-l+1;i++){
        a1[i]=a[i1];
        i1++;
    }
    for(int i=0;i<r-mid;i++){
        b1[i]=a[j1];
        j1++;
    }
    i1=0,j1=0;
    int i=l;
    while(i1<=(mid-l) && j1<=(r-mid-1)){
        if(a1[i1]>b1[j1]){
            a[i]=b1[j1];
            s+=((mid-l+1)-i1);
            j1++;i++;
        }
        else if(a1[i1]<=b1[j1]){
            a[i]=a1[i1];
            i1++;i++;
        }
        c++;
    }
    while(i1<=(mid-l)){
        a[i]=a1[i1];
        i1++;i++;
    }
    while(j1<=(r-mid-1)){
        a[i]=b1[j1];
        j1++;i++;
    }
}
void mergeSort(int a[],int l,int r,int &c,int &s){
    
    if(l>=r) return;
    int mid=(l+r)/2;
    mergeSort(a,l,mid,c,s);
    mergeSort(a,mid+1,r,c,s);
    merge(a,l,mid,r,c,s);
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
        int c=0,s=0;
        mergeSort(a,0,n-1,c,s);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        cout<<"Comparison "<<c<<"\n";
        cout<<"Swaps "<<s<<"\n";
    }
    return 0;
}