#include<iostream>
#include<cmath>
#include<string>
using namespace std;
int main(){
    int n;
    char c;
    cin >> n >> c;
    double l = round(0.5 * n);
    int s = (int) l - 2;
    string str1,str2;
    for(int i=0; i < n; ++i){
        str1.push_back(c);
        if(i == 0) str2.push_back(c);
        else if(i == n - 1) str2.push_back(c);
        else str2.push_back(' ');
    }
    cout << str1 << endl;
    for(int i = 0; i < s; ++i){
        cout << str2 << endl;
    }
    cout << str1 << endl;
    
    return 0;
}
