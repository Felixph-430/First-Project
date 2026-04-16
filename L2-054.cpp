#include<bits/stdc++.h>
using namespace std;
set<int> p[3];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int x, y;
        cin >> x >> y;
        p[y].insert(x);
    }
    int cnt =0;
    for(int a : p[0]){
        for(int b : p[1]){
            int c = 2 * b - a;
            if(p[2].count(c) == 1){
                printf("[%d, 0] [%d, 1] [%d, 2]\n", a, b, c);
                ++cnt;
            } 
        }
    }
    if(cnt == 0) cout << -1 <<'\n';
    return 0;
}