#include<stdio.h>
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main(){
    string dividend;
    int divisor;
    cin >> dividend >> divisor;
    int str_length = dividend.size();
    string quotient;
    int remain = 0;
    if(str_length == 1 && dividend[0] - '0' < divisor){
        quotient += '0';
        remain = dividend[0] - '0';
    }else{
        int q = (dividend[0] - '0') / divisor;
        if(q != 0) quotient += to_string(q);
        remain = (dividend[0] - '0') % divisor;
        for(int i = 1; i < str_length; ++i){
            q = (dividend[i] - '0' + remain * 10) / divisor;
            quotient += to_string(q);
            remain = (dividend[i] - '0' + remain * 10) % divisor;
        }
    }
    cout << quotient << ' ' << remain << endl;

    return 0;
}