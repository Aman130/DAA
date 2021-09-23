#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int comparison=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int f;
        cin>>f;
        int low=0,high=n-1,flag=0;
        while(low<=high)
        {
            int mid=(low+high)/2;
            comparison+=1;
            if(a[mid]==f){
                flag=1;
                break;
            }
            else if(a[mid]<f){
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
}