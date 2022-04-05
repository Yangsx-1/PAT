#include<iostream>
#include<string>

using namespace std;

bool judge(string s) {
    int num[5] = { 0 };
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] != 'P' && s[i] != 'T' && s[i] != 'A') return false;
        if (s[i] == 'P') {
            ++num[0];
            if (num[0] > 1 || num[1] >= 1) return false;
        }
        else if (s[i] == 'T') {
            ++num[1];
            if (num[0] == 0 || num[1] > 1) return false;
        }
        else {
            if (num[0] == 0 && num[1] == 0) ++num[2];
            else if (num[0] != 0 && num[1] == 0) ++num[3];
            else ++num[4];
        }
    }
    if (num[0] == 0 || num[1] == 0 || num[3] == 0) return false;
    else if (num[2] * num[3] != num[4]) return false;
    else return true;
}

int main() {
    int n = 0;
    cin >> n;
    string tojudge[10];
    for (int i = 0; i < n; ++i) {
        cin >> tojudge[i];
    }
    for (int j = 0; j < n; ++j) {
        bool index = judge(tojudge[j]);
        if (index == true) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
