#include <bits/stdc++.h>
using namespace std;
using UUL = unsigned long long;/*(0-2^64-1)超过范围自动取余2^64， 这是因为无符号整数的存储本质上就是二进制补码，硬件和C++标准都规定了这种“模运算”行为, uint64_t*/
typedef long long ll;//(-2^63 - 2^63-1)//9,223,372,036,854,775,807约9*10^19//int64_t
typedef pair<ll, ll> pll;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef vector<int> vi;//(-2^31 - 2^31-1)//2,147,483,647约21*10^9//int32_t
typedef vector<ll> vll;
typedef vector<double> vd;//(1.7*10^-308 - 1.7*10^308)
typedef vector<string> vs;
typedef vector<vi> vvi;
typedef vector<vvi> vvvi;
typedef vector<vll> vvll;
typedef vector<vvll> vvvll;
typedef vector<pii> vpii;
typedef vector<vpii> vvpii;
typedef vector<pll> vpll;
typedef vector<vpll> vvpll;
typedef vector<pdd> vpdd;
typedef vector<vd> vvd;
#define yn(ans) printf("%s\n", (ans)?"Yes":"No");
#define YN(ans) printf("%s\n", (ans)?"YES":"NO");
template<class T> bool chmax(T &a, T b) {
    if (a >= b) return false;
    a = b; return true;
}
template<class T> bool chmin(T &a, T b) {
    if (a <= b) return false;
    a = b; return true;
}
#define FOR(i, s, e, t) for ((i) = (s); (i) < (e); (i) += (t)) 
#define REP(i, e) for (int i = 0; i < (e); ++i)
#define REP1(i, s, e) for (int i = (s); i < (e); ++i)
#define RREP(i, e) for (int i = (e); i >= 0; --i)
#define RREP1(i, e, s) for (int i = (e); i >= (s); --i)
#define all(v) v.begin(), v.end()
#define pb push_back
#define qb pop_back
#define pf push_front
#define qf pop_front
#define maxe max_element
#define mine min_element
ll inf = 1e18;
//用于调试，输出当前行号。
#define DEBUG printf("%d\n", __LINE__); fflush(stdout);
//打印vector内容，调试用
template<class T> void print(vector<T> &v, bool withSize = false) {
    if (withSize) cout << v.size() << endl;
    REP(i, v.size()) cout << v[i] << " "; 
    cout << endl;
}
//定义64位高质量随机数生成器，常用于生成随机数据或洗牌
mt19937_64 rng((unsigned int) chrono::steady_clock::now().time_since_epoch().count());

int __FAST_IO__ = []() {
    std::ios::sync_with_stdio(0);//关闭c++和c的同步，使得cin/cout更快，但不能和scanf/printf混用
    std::cin.tie(0);//解除cin和cout的绑定，使得cin更快，但cout不再自动刷新
    std::cout.tie(0);//解除cout和其他的绑定(一般影响不大)
    return 0;
}();//用于加速输入输出
int read(){
    char ch = getchar();
    while(ch < '0' || ch > '9') ch = getchar();
    int res = 0;
    while(ch != '\n' && ch != ' ' && ch >= '0' && ch <= '9') {
        res = res * 10 + (ch - '0');
        ch = getchar();
    }
    return res;

}
#define TESTS int t; cin >> t; while (t--)
#define TEST 
int main() {
    cout << "Hello, World!" << endl;
    return 0;
}