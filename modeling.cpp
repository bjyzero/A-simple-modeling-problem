#include <bits/stdc++.h>
using namespace std;

using ll = long long;
int main(void)
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    ll n, q;
    cin >> n >> q;
    vector<ll> a(n);
    for (auto &x : a)
        cin >> x;

    ll val, sum = 0;
    while (q--)
    {
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