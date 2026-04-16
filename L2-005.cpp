#include<bits/stdc++.h>
using namespace std;
map<int, bool> mp[55];
int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; ++i){
        int k;
        cin >> k;
        for(int j = 1; j <= k; ++j){
            int x;
            cin >> x;
            mp[i][x] = 1;
        }
    }
    int q;
    cin >> q;
    while(q--){
        int a, b;
        cin >> a >> b;
        int nc = 0, nt = mp[a].size() + mp[b].size();
        for(auto &p : mp[a]){
            if(mp[b].count(p.first)) nc++;
        }
        nt -= nc;
        printf("%.2f%%\n", (double)nc / nt * 100);
    }
    return 0;
}