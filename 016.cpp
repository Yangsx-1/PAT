#include<iostream>
#include<cmath>
using namespace std;
int main(){
    long a,da,b,db;
    cin >> a >> da >> b >> db;
    long pa = 0, pb = 0;
    int na = 0, nb = 0;
    while(a > 0){
        int res = a % 10;
        if(res == da){
            na++;
        }
        a = a / 10;
    }
    while(b > 0){
        int res = b % 10;
        if(res == db){
            nb++;
        }
        b = b / 10;
    }
    for(int i = 0; i < na; ++i){
        pa += da * pow(10, i);
    }
    for(int i = 0; i < nb; ++i){
        pb += db * pow(10, i);
    }
    long result = pa + pb;
    cout << result << endl;

    return 0;
}