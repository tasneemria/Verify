#include<bits/stdc++.h>
using namespace std;

int main()
{
    double n,k;
    cin>>n>>k;
    vector< double > vct;
    for(int i=0; i<n; i++)
    {
        double a;
        cin>>a;
        vct.push_back(a);
    }
    sort(vct.begin(),vct.end());

    int cnt = 0;
    int nw,a = vct[n-1];
    for(int i=0;i<n;i++)
    {
        while(k * 2 < vct[i])
        {
            k *= 2;
            cnt++;
        }
        //cout<<c<<" "<<k<<"\n";
        k = max(k, vct[i]);
    }
    cout<<cnt<<endl;


    return 0;
}
