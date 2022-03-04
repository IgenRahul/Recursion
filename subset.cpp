#include<bits/stdc++.h>
using namespace std;

vector<string> ans;
int k = 0;
void solve(string ip,string op){
    if(ip.size()==0){
        cout<<op<<endl;
        return;
    }
    string op1,op2;
    op1 = op + ip[0];
    op2 = op;
    ip.erase(ip.begin());
    solve(ip,op1);
    solve(ip,op2);
}
int main(){
    string ip,op;
    cin>>ip;
    solve(ip,op);
    return 0;
}