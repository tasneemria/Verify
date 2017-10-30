#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],save[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        save[i] = a[i];
    }
    sort(a,a+n);
    if(a[n-1]-a[0]>k)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=1;j<=save[i];j++)
            {
                if(j%k==0) cout<<k<<" ";
                else cout<<j%k<<" ";
            }
            cout<<endl;
        }
    }

    return 0;
}
