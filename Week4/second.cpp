#include <bits/stdc++.h>

using namespace std;

int makePivot(int a[], int l, int h,int &c,int &s)
{
    int p = a[h];
    int i = l - 1, j = l;
    for (; j < h; ++j)
    {
        c++;
        if (a[j]<=p)
        {
            s++;
            int t=a[++i];
            a[i]=a[j];
            a[j]=t;
        }
    }
    s++;
    int t = a[++i];
    a[i] = a[j];
    a[j] = t;
    return i;
}
void quickSort(int a[],int l,int r,int &c,int &s){
    
    if (l<r)
    {
        int pivot = makePivot(a, l, r,c,s);
        quickSort(a, l, pivot - 1,c,s);
        quickSort(a, pivot + 1, r,c,s);
    }
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
        quickSort(a,0,n-1,c,s);
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<"\n";
        cout<<"Comparison "<<c<<"\n";
        cout<<"Swaps "<<s<<"\n";
    }
    return 0;
}