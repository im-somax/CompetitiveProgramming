#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N = 1e6;

int a[N], fgcd[N], bgcd[N];

void gcd(int n)
{
    fgcd[1] = a[1];
    bgcd[n] = a[n];
    for (int i = n - 1; i > 0; i--)
    {
        bgcd[i] = __gcd(bgcd[i + 1], a[i]);
    }
    for (int i = 2; i < n + 1; i++)
    {
        fgcd[i] = __gcd(fgcd[i - 1], a[i]);
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int sum = 0;
        int ans = 0;
        for (int i = 1; i < n + 1; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n + 1);
        gcd(n);
        for (int i = 1; i < n + 1; i++)
        {
            sum += a[i];
        }
        int res = LLONG_MAX;
        for (int i = 1; i < n + 1; i++)
        {
            ans = (sum - a[i] + __gcd(fgcd[i - 1], bgcd[i + 1])) / __gcd(fgcd[i - 1], bgcd[i + 1]);
            if (ans < res)
                res = ans;
        }
        cout << res << "\n";
    }
    return 0;
}