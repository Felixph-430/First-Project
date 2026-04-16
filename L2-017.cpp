#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }
    sort(a, a + n);
    int Introverted = 0, Outgoing = 0;
    for(int i = 0; i < n; ++i){
        if(i < n / 2){
            Introverted += a[i];
        }
        else{
            Outgoing += a[i];
        }
    }
    int diff = Outgoing - Introverted;
    printf("Outgoing #: %d\nIntroverted #: %d\nDiff = %d\n",n - n / 2, n / 2, diff);
    return 0;
}