//这种写法是常见的暴力解题
//首先我们须知int的数据范围约等于10^9，这里数据可能超范围，我们开long long
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, q; cin >> n >> q;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    //这里的时间复杂度为O(q*n=10^10)，而计算机1s可以跑2*10^8个示例
    //所以我们开始思考精减时间复杂度
    ll val, sum = 0;
    while (q--)
    {
    //首先在取模上我们设置条件，让数组中元素小于q_i的保持原值不变，大于的进行取模
    //所以我们在前面加一个sort(),在遍历到等于或者小于值q的时候break；
    //这就要求我们提前在放入数组a元素的时候得出sum，在取模的时候减去该元素值再加上取模后的元素值
    //但是这里要求每次取模完成后再对数组进行一次排序!!!
    //此时我们的时间复杂度由O(q*n)-->O(q*nlogn)，反而变大了!!!
        cin >> val;
        for (ll &x : a)
        {
            x %= val;
            sum += x;
        }
        cout << sum << ' ';
        sum = 0;
    }
    cout << '\n';
    return 0;
}
//但是我们从中可以大概得到一个思路，我们可以试着使用时间复杂度更小的STL容器，eg：priority_queue(),set()
//之后一个文件(modeling_end.cpp)的代码将使用priority_queue()容器编写
//并且对时间复杂度进行分析并详解时间缩小的原因
