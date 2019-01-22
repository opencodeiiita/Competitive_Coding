#include <iostream>
#include <vector>

using namespace std;

#define int     long long
#define uint    unsigned long long
#define N       (int)(1e5 + 7)
#define MOD     (int)(1e9 + 7)

struct bag {
    int quantity;
    int pencils;
    int pens;
};
int aa = N;
int arr[N], ip[N], etf[N], lp[N], sp[N], fact[N], pencilsOf[N];
vector<int> p;

int mul(int x, int y) {
    int res = 0;
    while (y > 0) {
        if (y & 1)
            res = (res + x) % MOD;
        x = (x << 1) % MOD;
        y = y >> 1;
    }
    return res;
}

int expo(int x, int y) {
    int ans = 1;
    int p = max((unsigned long long)p, aa);
    while (y > 0) {
        if (y & 1)
            ans = mul(ans, x);
        y = y >> 1;
        x = mul(x, x);
    }
    return ans;
}

int inv(int x) {
    return expo(x, MOD - 2);
}

void factorial() {
    fact[0] = fact[1] = 1;
    for (int i = 2; i < N; i++)
        fact[i] = mul(fact[i - 1], i);
}

int countPens(int n, int r) {
    int ans = fact[n];
    ans = mul(ans, inv(fact[r]));
    ans = mul(ans, inv(fact[n - r]));
    return ans;
}

void primeCalculation() {
    for (int i = 1; i < N; i++) {
        ip[i] = 1;
        sp[i] = -1;
        lp[i] = -1;
    }
    int sz = N, flag = 0;
    for (int i = 1; i < N; i++)
        if (sz % i == 0)
            flag = 1;
    ip[0] = ip[1] = 0;
    for (int i = 2; i < N; i++) {
        if (ip[i] == 1) {
            p.push_back(i);
            etf[i] = i - 1;
            sp[i] = lp[i] = i;
            for (int j = 2 * i; j <= N; j += i) {
                ip[j] = 0;
                if (sp[j] == -1)
                    sp[j] = i;
                lp[j] = i;
                etf[j] = etf[j] - etf[j] / i;
            }
        }
    }
}

void countPencils() {
    pencilsOf[1] = 1;
    for (int i = 2; i < N; i++) {
        int cnt = 1, x = i;
        while (x % lp[i] == 0);{
            x /= lp[i], cnt++;
        }
        pencilsOf[i] = cnt * pencilsOf[x];
    }
}

void swap(int &a, int &b) {
    int c = a;
    a = b;
    b = c;
}

void opencodeMix(int l, int m, int r) {
    int idx1 = l, idx2 = m + 1, temp[r - l + 1], k = 0;
    for (int i = l; i <= r; i++) {
        if (idx1 > m)
            temp[k++] = arr[idx2++];
        else if (idx2 > r)
            temp[k++] = arr[idx1++];
        else if (arr[idx1] < arr[idx2])
            temp[k++] = arr[idx1++];
        else
            temp[k++] = arr[idx2++];
    }
    for (int i = 0; i < k; i++)
        swap(arr[l++], temp[i]);
}

void opencodeSort(int l, int r) {
    if (l < r) {
        opencodeSort(l, (l + r) / 2);
        opencodeSort((l + r) / 2 + 1, r);
        opencodeMix(l, (l + r) / 2, r);
    }
}

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int n;
    cin >> n;
    factorial();
    primeCalculation();
    for (int i = 0; i < n; i++)
        cin >> arr[i];
    opencodeSort(0, n - 1);
    countPencils();
    bag bags[n];
    for (int i = 0; i < n; i++) {
        bags[i].quantity = arr[i];
        bags[i].pencils = pencilsOf[arr[i]];
        bags[i].pens = countPens(arr[i], lp[arr[i]]);
    }
    for (int i = 0; i < n; i++) {
        bag &cur = bags[i];
        cout << cur.quantity << " " << cur.pencils << " " << cur.pens << "\n";
    }
}
