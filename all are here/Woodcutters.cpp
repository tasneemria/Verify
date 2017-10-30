#include <bits/stdc++.h>
#define ll             long long
#define f(i,a,b)       for(int i=(a);i<(b);i++)
#define fd(i,a,b)      for(ll i=(a);i>(b);i--)
#define x              first
#define y              second
#define si(a)          scanf("%d",&a)
#define sii(a,b)       scanf("%d %d",&a,&b)
#define siii(a,b,c)    scanf("%d %d %d",&a,&b,&c)
#define sl(a)          scanf("%I64d",&a)
#define sll(a,b)       scanf("%I64d %I64d",&a,&b)
#define slll(a,b,c)    scanf("%I64d %I64d %I64d",&a,&b,&c);
#define pfci(n,ans)    printf("Case %I64d: %d\n",n,ans)
#define pfcl(n,ans)    printf("Case %I64d: %I64d\n",n,ans)
#define pfcd(n,ans)    printf("Case %I64d: %lf\n",n,ans)
#define pb             push_back
#define all(v)         v.begin(),v.end()
#define MOD 1000000009
#define ld long double
#define mp make_pair
using namespace std;
#define INF 1e12
#define EPS 1e-12
//#define double long double
#define Pi acos(-1.0)

int main()
{
    int n;
    si(n);
    vector< pair< long long,long long > > vct;
    f(i,0,n)
    {
        long long in1,in2;
        //sll(in1,in2);
        cin>>in1>>in2;
        vct.pb(mp(in1,in2));
    }
//     f(i,0,n)
//    {
//        cout<<vct[i].first<<" "<<vct[i].second<<endl;
//    }
    if(n==1)
    {
        cout<<1<<endl;
        return 0;
    }
    long long cnt = 2,l=vct[0].first;
    f(i,1,n-1)
    {
        if(vct[i].first-vct[i].second>l)
        {
            //cout<<i<<" one"<<endl;
            l = vct[i].first;
            cnt++;
        }
        else if(vct[i].first+vct[i].second<vct[i+1].first)
        {
            //cout<<i<<" two"<<endl;
            l = vct[i].first+vct[i].second;
            cnt++;
        }
        else
        {
            //cout<<i<<" three"<<endl;
            l = vct[i].first;
        }
       // cout<<l<<endl;
    }

    cout<<cnt<<endl;
    return 0;
}
