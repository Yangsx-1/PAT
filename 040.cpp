#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int l = s.size();
    vector<int> leftp(l);
    for(int i=1;i<l;++i){
        if(s[i-1] == 'P') leftp[i] = leftp[i-1] + 1;
        else leftp[i] = leftp[i-1];
    }
    int rightt = 0;
    int ans = 0;
    for(int i=l-2;i>=0;--i){
        if(s[i+1] == 'T') rightt++;
        if(s[i] == 'A'){
            ans+=rightt*leftp[i];
            ans = ans%1000000007;
        }
    }
    cout << ans << endl;
    return 0;
}
