#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    map< int,int > mp;
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        mp[a]++;
    }

    vector< int > vt;
    for(int i=1;;i++)
    {
        if(mp[i]==0)
        {
            m = m-i;
            if(m<0) break;
            vt.push_back(i);
        }
    }
    cout<<vt.size()<<endl;
    for(int i=0;i<vt.size();i++) cout<<vt[i]<<" ";

    return 0;
}

//adding some comments to make difference

