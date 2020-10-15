/*
引用元：https://atcoder.jp/contests/abc179/tasks/abc179_d
D - Leaping TakEditorial
Time Limit : 2 sec / Memory Limit : 1024 MB
配点 : 400 点

*/
#include <algorithm>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cfloat>
#include <climits>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <list>
#include <map>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <unordered_set>
#include <vector>
using namespace std;
typedef long double ld;
typedef long long int ll;
typedef unsigned long long int ull;
typedef vector<int> vi;
typedef vector<char> vc;
typedef vector<bool> vb;
typedef vector<double> vd;
typedef vector<string> vs;
typedef vector<ll> vll;
typedef vector<pair<int, int>> vpii;
typedef vector<pair<ll, ll>> vpll;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vc> vvc;
typedef vector<vs> vvs;
typedef vector<vll> vvll;
typedef map<int, int> mii;
typedef set<int> si;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rrep(i, n) for (int i = 1; i <= (n); ++i)
#define arep(i, v) for (auto i : v)
#define irep(it, stl) for (auto it = stl.begin(); it != stl.end(); it++)
#define drep(i, n) for (int i = (n)-1; i >= 0; --i)
#define fin(ans) cout << (ans) << '\n'
#define STLL(s) strtoll(s.c_str(), NULL, 10)
#define mp(p, q) make_pair(p, q)
#define pb(n) push_back(n)
#define all(a) a.begin(), a.end()
#define rall(a) a.rbegin(), a.rend()
#define Sort(a) sort(a.begin(), a.end())
#define Rort(a) sort(a.rbegin(), a.rend())
#define MATHPI acos(-1)
#define fi first
#define se second
// #include <atcoder/all>
// using namespace atcoder;
constexpr int dx[8] = {1, 0, -1, 0, 1, -1, -1, 1};
constexpr int dy[8] = {0, 1, 0, -1, 1, 1, -1, -1};
template <class T>
inline bool chmax(T& a, T b) {
    if (a < b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline bool chmin(T& a, T b) {
    if (a > b) {
        a = b;
        return 1;
    }
    return 0;
}
template <class T>
inline void dump(T& v) {
    irep(i, v) { cout << (*i) << ((i == --v.end()) ? '\n' : ' '); }
}
template <class T, class U>
inline void dump(map<T, U>& v) {
    irep(i, v) { cout << i->first << " " << i->second << '\n'; }
}
inline string getline() {
    string s;
    getline(cin, s);
    return s;
}
inline void yn(const bool b) { b ? fin("yes") : fin("no"); }
inline void Yn(const bool b) { b ? fin("Yes") : fin("No"); }
inline void YN(const bool b) { b ? fin("YES") : fin("NO"); }
struct io {
    io() {
        ios::sync_with_stdio(false);
        cin.tie(0);
    }
};
const int INF = INT_MAX;
constexpr ll LLINF = 1LL << 61;
constexpr ll MOD = 998244353;  // 1000000007;
constexpr ld EPS = 1e-11;
 
/* --------------------   ここまでテンプレ   -------------------- */
 
struct mint {
    ll x;
    mint(ll _x = 0) : x((_x % MOD + MOD) % MOD) {}
 
    /* 初期化子 */
    mint operator+() const { return mint(x); }
    mint operator-() const { return mint(-x); }
 
    /* 代入演算子 */
    mint& operator+=(const mint a) {
        if ((x += a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint& operator-=(const mint a) {
        if ((x += MOD - a.x) >= MOD) x -= MOD;
        return *this;
    }
    mint& operator*=(const mint a) {
        (x *= a.x) %= MOD;
        return *this;
    }
    mint& operator/=(const mint a) {
        x *= modinv(a).x;
        x %= MOD;
        return (*this);
    }
    mint& operator%=(const mint a) {
        x %= a.x;
        return (*this);
    }
    mint& operator++() {
        ++x;
        if (x >= MOD) x -= MOD;
        return *this;
    }
    mint& operator--() {
        if (!x) x += MOD;
        --x;
        return *this;
    }
    mint& operator&=(const mint a) {
        x &= a.x;
        return (*this);
    }
    mint& operator|=(const mint a) {
        x |= a.x;
        return (*this);
    }
    mint& operator^=(const mint a) {
        x ^= a.x;
        return (*this);
    }
    mint& operator<<=(const mint a) {
        x *= pow(2, a).x;
        return (*this);
    }
    mint& operator>>=(const mint a) {
        x /= pow(2, a).x;
        return (*this);
    }
 
    /* 算術演算子 */
    mint operator+(const mint a) const {
        mint res(*this);
        return res += a;
    }
    mint operator-(const mint a) const {
        mint res(*this);
        return res -= a;
    }
    mint operator*(const mint a) const {
        mint res(*this);
        return res *= a;
    }
    mint operator/(const mint a) const {
        mint res(*this);
        return res /= a;
    }
    mint operator%(const mint a) const {
        mint res(*this);
        return res %= a;
    }
    mint operator&(const mint a) const {
        mint res(*this);
        return res &= a;
    }
    mint operator|(const mint a) const {
        mint res(*this);
        return res |= a;
    }
    mint operator^(const mint a) const {
        mint res(*this);
        return res ^= a;
    }
    mint operator<<(const mint a) const {
        mint res(*this);
        return res <<= a;
    }
    mint operator>>(const mint a) const {
        mint res(*this);
        return res >>= a;
    }
 
    /* 条件演算子 */
    bool operator==(const mint a) const noexcept { return x == a.x; }
    bool operator!=(const mint a) const noexcept { return x != a.x; }
    bool operator<(const mint a) const noexcept { return x < a.x; }
    bool operator>(const mint a) const noexcept { return x > a.x; }
    bool operator<=(const mint a) const noexcept { return x <= a.x; }
    bool operator>=(const mint a) const noexcept { return x >= a.x; }
 
    /* ストリーム挿入演算子 */
    friend istream& operator>>(istream& is, mint& m) {
        is >> m.x;
        m.x = (m.x % MOD + MOD) % MOD;
        return is;
    }
    friend ostream& operator<<(ostream& os, const mint& m) {
        os << m.x;
        return os;
    }
 
    /* その他の関数 */
    mint modinv(mint a) { return pow(a, MOD - 2); }
    mint pow(mint x, mint n) {
        mint res = 1;
        while (n.x > 0) {
            if ((n % 2).x) res *= x;
            x *= x;
            n.x /= 2;
        }
        return res;
    }
};
 
template <typename T>
class Sum {
   public:
    // 単位元
    T unit;
 
    Sum(void) {
        // 単位元
        unit = 0;
    }
 
    // 演算関数
    T calc(T a, T b) { return a + b; }
};
 
template <typename T>
struct Min {
   public:
    // 単位元
    T unit;
 
    Min(void) {
        // 単位元
        unit = INF;
    }
 
    // 演算関数
    T calc(T a, T b) { return min(a, b); }
};
 
template <typename T, class MONOID>
class SegmentTree {
   public:
    // セグメント木の葉の要素数
    int n;
 
    // セグメント木
    vector<T> tree;
 
    // モノイド
    MONOID mono;
 
    SegmentTree(vector<T>& v)
        : n(1 << (int)ceil(log2(v.size()))), tree(vector<T>(n << 1)) {
        for (int i = 0; i < v.size(); ++i) {
            update(i, v[i]);
        }
        for (int i = v.size(); i < n; ++i) {
            update(i, mono.unit);
        }
    }
 
    // k番目の値(0-indexed)をxに変更
    void update(int k, T x) {
        k += n;
        tree[k] = x;
        for (k = k >> 1; k > 0; k >>= 1) {
            tree[k] = mono.calc(tree[k << 1 | 0], tree[k << 1 | 1]);
        }
    }
 
    // [l, r)の最小値(0-indexed)を求める．
    T query(int l, int r) {
        T res = mono.unit;
        l += n;
        r += n;
        while (l < r) {
            if (l & 1) {
                res = mono.calc(res, tree[l++]);
            }
            if (r & 1) {
                res = mono.calc(res, tree[--r]);
            }
            l >>= 1;
            r >>= 1;
        }
        return res;
    }
 
    T operator[](int k) {
        // st[i]で添字iの要素の値を返す
        if (k - n >= 0 || k < 0) {
            return -INF;
        }
        return tree[tree.size() - n + k];
    }
 
    void show(void) {
        int ret = 2;
        for (int i = 1; i < 2 * n; ++i) {
            if (tree[i] == mono.unit)
                cout << "UNIT ";
            else
                cout << tree[i] << " ";
            if (i == ret - 1) {
                cout << endl;
                ret <<= 1;
            }
        }
        cout << endl;
    }
};
 
int main() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> r(k);
    rep(i, k) { cin >> r[i].fi >> r[i].se; }
    // セグメント木の作成
    vector<mint> v(n + 10, 0);
    SegmentTree<mint, Sum<mint>> st(v);
 
    {
        // dp[1] = 1;
        st.update(0, st[0] + 1);
        st.update(1, st[1] - 1);
    }
    // st.show();
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            int s = r[j].first + i;
            int t = r[j].second + i;
            chmin(s, n + 5);
            chmin(t, n + 5);
            mint x = st.query(0, i + 1);
            st.update(s, st[s] + x);
            st.update(t + 1, st[t + 1] - x);
        }
        // st.show();
    }
    cout << st.query(0, n).x << endl;
    /*
        int n, q;
        int query, s, t, x, i;
        cin >> n >> q;
 
 
        while (q--) {
            scanf("%d", &query);
            if (query) {
                // クエリget(i)の時
                scanf("%d", &i);
                printf("%d\n", st.query(0, i));
            } else {
                // クエリadd(s, t, x)の時
                scanf("%d %d %d", &s, &t, &x);
                // 私のセグメント木の更新処理は加算ではなく代入なので，
                // これはs - 1番目の値をx足しているのと同義です．
                st.update(s - 1, st[s - 1] + x);
                st.update(t, st[t] - x);
            }
        }*/
}