#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main(void)
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,q;
    cin>>n>>q;
    priority_queue<ll> max_q;
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int x;
        cin>>x;
        max_q.push(x);
        ans+=x;
    }

    while(q--)
    {
        int x;
        cin>>x;
        while(max_q.top()>=x)
        {
            int y=max_q.top();
            max_q.pop();

            ans-=y;
            y%=x;
            ans+=y;

            max_q.push(y);
        }
    }
    cout<<ans<<'\n';
    return 0;
}