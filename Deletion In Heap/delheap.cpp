//  heap deletion in begining 


#include<bits/stdc++.h>
using namespace std;
    
        int a[]={5,8,6,4,7,55,65,32,3543,78,58,62,57,66,24};
    int element=a[0];
// You are using GCC
void deletion(int a[],int&n)
{
    
    int last=a[n-1];
    n=n-1;
    int ptr=0;
    int left=1;
  int  right=2;
    while(right<=n-1)
    {
        if(last>=a[left] && last>=a[right])
        {
            a[ptr]=last;
            return;
        }
        if(a[right]<=a[left])
        {
            a[ptr]=a[left];
            ptr=left;
        }
        else
        {
            a[ptr]=a[right];
            ptr=right;
        }
        left=2*ptr;
        right=left+1;
        
    }
    a[ptr]=right;
    }
    int main()
    
    {
        int n=sizeof(a)/sizeof(a[0]);
        int item=0;
        
        deletion(a,n);
        cout<<"Deleted element : " <<element<<endl;
        cout<<"After deletion heap is ";
        for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
        return 0;
    }