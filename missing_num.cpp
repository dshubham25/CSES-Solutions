#include <bits/stdc++.h>
#include <iostream>
using namespace std;

typedef unsigned long long ull;

int main()
{
    cin.tie(0);
    cout.tie(0);
    ios_base::sync_with_stdio(0);
    ull n, m, k, x = 0ull;
    cin >> n;
    k = n;
    while (--n)
    {
        cin >> m;
        x += m;
        k += n;
    }
    cout << k - x << endl;
}