//set比priority_queue的功能更多，但是常数更大(跑的更慢一点)，虽然两者时间复杂度一致
#include <bits/stdc++.h>
using namespace std;

using ll=long long;

int main(void)
{
    ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
    int n,q; cin>>n>>q;
    priority_queue<ll> max_q; //维护最大值的容器，俗称大根堆
    ll ans=0;
    for(int i=0;i<n;++i)
    {
        int x; cin>>x;
        max_q.push(x); //插入到大根堆里
        ans+=x; //提前处理完所有数的和
    }

    while(q--)
    {
    //好像每次也要更新n次？？？-->实际上总的更新次数有保证
    //eg：取模q为1，看似所有的数都要更新一次，但是后续不需要取出数再来更新
        int x; cin>>x;
        while(max_q.top()>=x)
        {
            int y=max_q.top();
            max_q.pop(); //取出最大的数
            ans-=y;
            y%=x;
            ans+=y; //更新总数之和
            max_q.push(y); //再插回堆里
        }
    }
    cout<<ans<<'\n';
    return 0;
}
