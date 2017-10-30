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
    vector< int > vt;
    f(i,0,2*n)
    {
        int a;
        si(a);
        vt.push_back(a);
    }
    sort(vt.begin(),vt.end());
    int mn = INFINITY,total = 0;
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=i+1;j<2*n;j++)
        {
            total = 0;
            for(int k=0;k<2*n-1;)
            {
                if(k==i)
                {
                    k++;
                    continue;
                }
                else if(k+1==i)
                {
                    total+=(vt[k+2]-vt[k]);
                    k = k+3;
                }
                else if(k==j)
                {
                    k++;
                    continue;
                }
                else if(k+1==j)
                {
                    total+=(vt[k+2]-vt[k]);
                    k = k+3;
                }
                else
                {
                    total+=(vt[k+1]-vt[k]);
                    k+=2;
                }
            }
            mn = min(mn,total);
        }
    }

    printf("%d\n",mn);

    return 0;
}
