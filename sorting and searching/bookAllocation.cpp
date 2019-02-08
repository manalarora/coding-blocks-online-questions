#include<iostream>
using namespace std;
bool condtion(int a[],int n,int ans,int k)
{
    int s=1,i;
    int curruntpage=0;
    for(i=0;i<n;i++)
    {
        if(curruntpage+a[i]>ans)
        {
            curruntpage=a[i];
            s++;
            if(s>k)
            {
                return false;
            }
        }
        else   ///YOU forgot to add else.
        curruntpage+=a[i];
    }
    return true;
}
int book(int a[],int n,int k)
{
    int totalpage=0,s=0,e=0,i,ans;
    for(i=0;i<n;i++)
    {
        totalpage+=a[i];
        s=max(s,a[i]);
    }
    e=totalpage;
    ans=s;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(condtion(a,n,mid,k))
        {
            ans=mid;
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    

    }
    return ans;
}
int main()
{
    int n,k,i,ans,t;
    cin>>t;
    while(t--)
    {
    cin>>n>>k;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    ans=book(a,n,k);
    cout<<ans<<endl;
    }
}


