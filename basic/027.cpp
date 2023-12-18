#include<iostream>

using namespace std;

int calc_total(int n){
    return 2 * n * n - 1;
}

void print(char sign, int number, int max_num){
    int pending = (max_num - number) / 2;
    for(int i = 0; i < max_num; ++i){
        if(i < pending) cout << ' ';
        else if(i < max_num - pending) cout << sign;
    }
    cout << endl;
}

int main(){
    int n;
    char sign;
    cin >> n >> sign;
    int index = 1;
    while(calc_total(index + 1) < n){
        index++;
    }
    const int max_num = index * 2 - 1;
    int res = n - calc_total(index);
    for(int i = index; i > 0; --i){
        print(sign, 2 * i - 1, max_num);
    }
    for(int i = 2; i <= index; ++i){
        print(sign, 2 * i - 1, max_num);
    }
    cout << res << endl;

    return 0;
}