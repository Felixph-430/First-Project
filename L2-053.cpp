#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    stack<string> stk;
    cin >> s;
    for(char c: s){
        if(c == '(')
        {
            stk.push("");
        }
        else if(c == ')'){
            cout << stk.top() <<endl;
            stk.pop();
        }
        else{
            stk.top().push_back(c);
        }
    }
    return 0;
}