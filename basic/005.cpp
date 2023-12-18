#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    int n;
    cin >> n;
    vector<int> num;
    for (int i = 0; i < n; ++i) {
        int tmp;
        cin >> tmp;
        num.push_back(tmp);
    }
    vector<int> comp = num;
    int findnum = 0;
    vector<int>::iterator result = find(comp.begin(), comp.end(), findnum);
    for (int i = 0; i < num.size(); ++i) {
        while (num[i] != 1) {
            if (num[i] % 2 == 0) {
                num[i] = num[i] / 2;
                findnum = num[i];
                result = find(comp.begin(), comp.end(), findnum);
                if (result != comp.end()) comp.erase(result);
            }
            else {
                num[i] = 3 * num[i] + 1;
                num[i] = num[i] / 2;
                findnum = num[i];
                result = find(comp.begin(), comp.end(), findnum);
                if (result != comp.end()) comp.erase(result);
            }
        }
    }
    sort(comp.begin(), comp.end(), greater<int>());
    for (int i = 0; i < comp.size(); ++i) {
        cout << comp[i];
        if (i < comp.size() - 1) {
            cout << ' ';
        }
    }

    return 0;
}
