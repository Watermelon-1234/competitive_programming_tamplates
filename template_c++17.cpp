#pragma GCC optimize("O3,unroll-loops")
#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastio ios_base::sync_with_stdio(false),cin.tie(0);
#define safe cerr << "\e[1;31m" << __PRETTY_FUNCTION__ << " line " << __LINE__ << " safe\e[0m\n";
#define int int64_t
#define pii pair<int,int>
#define F first
#define S second
#define mp make_pair
#define pb emplace_back
#define rep(i,n) for(int i=0;i<(n);++i)
#define foo(i,a,b) for(int i=(a);i<=(b);++i)
#define oof(i,a,b) for(int i=(a);i>=(b);--i)
#define all(x) begin(x),end(x)
#define btw(a,b,c) ((a)<=(b)&&(b)<=(c))
using namespace __gnu_pbds;
using namespace std;
typedef tree<int,null_type,less<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_set;
typedef tree<int,null_type,less_equal<int>,rb_tree_tag, tree_order_statistics_node_update> ordered_multiset;

#define EXPAND(x) #x
#define STRINGIFY(x) EXPAND(x)

// C++17 variadic debug function with fold expression
template <typename... T>
void debug(T... args) {
    cerr << "\e[1;31m" << "debug: [";
    ((cerr << STRINGIFY(args) << "=" << args << ", "), ...);
    cerr.seekp(-2, std::ios_base::cur); // 移動指針位置來移除最後的逗號和空格
    cerr << "]\e[0m\n";
}

// Orange function for range printing
template <typename T>
void orange(T L, T R) {
    cerr << "\e[1;31morange: [";
    for (int f = 0; L != R; ++L) cerr << (f++ ? " " : "") << *L;
    cerr << "\e[0m\n";
}

template <typename T>
T& inpr()
{
    static T tmp;
    cin>>tmp;
    return tmp;
}

#undef int
int main() {
    #define int int64_t
    fastio;

    vector<int> v = {1, 2, 3, 4, 5};
    orange(v.begin(), v.end());

    int a = 10, b = 20, c = 30;
    debug(a, b, c);
    
    return 0;
}
