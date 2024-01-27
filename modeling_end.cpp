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
//*这里对这个时间复杂度进行分析 ！！！
//当y >= x, y mod x <=y / 2
//设a % b = c， 则a = k * b + c， 其中k >= 1, 则a >= b + c > 2 * c
//那么A一直除以2(A / 2 / 2 / 2....)最多除几次到0？--->最多 logA
//这里 A 是值域
//一共 n 个数， 每个数最多更新 logA 次， 所以总更新次数只有 nlogA 次
//每一次更新用到堆， 一次堆操作是 O(log n)
//所以总时间复杂度是 O (n logA logn)
//计算 log 时一般以 2 为底，这里计算得出10^5 * 20 * 30 = 6e7;
