#include<bits/stdc++.h>
using namespace std;
const int N = 1050;
int dat[N], ans1[N], ans2[N],ans1_cnt,ans2_cnt;
bool check1(int l, int r){
    int x = dat[l];
    if(l > r) return 1;
    else if(l == r){
        ans1[ans1_cnt++] = x;
        return 1;
    }
    int i;
    //ans1[ans1_cnt++] = x;
    for(i = l + 1; i <= r && dat[i] < x;++i);
    i--;
    int j;
    for(j = i + 1; j <= r && dat[j] >= x; ++j);
    j--;
    if(j != r) return 0;
    //cout << "i: " << i << " j: " << j <<" ans1_cnt: " << ans1_cnt << endl;
    bool flg = check1(l + 1, i) & check1(i + 1, r);
    ans1[ans1_cnt++] = x;
    return flg;
}
bool check2(int l, int r){
    int x = dat[l];
    if(l > r) return 1;
    else if(l == r){
        ans2[ans2_cnt++] = x;
        return 1;
    }
    int i;
    for(i = l + 1; i <= r && dat[i] >= x;++i);
    i--;
    int j;
    for(j = i + 1; j <= r && dat[j] < x; ++j);
    j--;
    if(j != r) return 0;
    bool flg = check2(l + 1, i) & check2(i + 1, r);
    ans2[ans2_cnt++] = x;
    return flg;
}
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) cin >> dat[i];
    if(check1(0, n - 1)){
        cout <<"YES\n";
        for(int i = 0; i < ans1_cnt; ++i){
            if(i) cout << " ";
            cout << ans1[i];
        }
    } 
    else if(check2(0, n - 1)){
        cout << "YES\n";
        for(int i = 0; i < ans2_cnt; ++i){
            if(i) cout << " ";
            cout << ans2[i];
        }
    } else cout << "NO\n";
    return 0;
}