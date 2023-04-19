#include<iostream>
#include<cmath>
using namespace std;

int main(){
    const int CLK_TCK = 100;
    const int MIN_CLK_TCK = 60 * 100;
    const int HOUR_CLK_TCK = 60 * 60 * 100;
    int start, end;
    cin >> start >> end;
    int diff = end - start;
    int hour = diff / HOUR_CLK_TCK;
    diff %= HOUR_CLK_TCK;
    int minute = diff / MIN_CLK_TCK;
    diff %= MIN_CLK_TCK;
    int second = diff / CLK_TCK;
    diff %= CLK_TCK;
    if(diff >= 50){
        second++;
        if(second == 60){
            second = 0;
            minute++;
            if(minute == 60){
                minute = 0;
                hour++;
            }
        }
    }

    if(hour < 10) cout << '0' << hour << ':';
    else cout << hour << ':';

    if(minute < 10) cout << '0' << minute << ':';
    else cout << minute << ':';

    if(second < 10) cout << '0' << second << endl;
    else cout << second << endl;

    return 0;
}