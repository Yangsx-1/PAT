#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main(){
    string number;
    cin >> number;
    int e_index = number.find('E');
    char base_sign = number[0];
    char power_sign = number[e_index + 1];
    int power = stoi(number.substr(e_index + 2, number.length() - e_index - 2));
    string base = number.substr(1, e_index - 1);
    if(power_sign == '+'){
        int point_index = 1;
        while(point_index <= power){
            if(point_index == base.length() - 1) break;
            swap(base[point_index], base[point_index + 1]);
            point_index++;
        }
        while(point_index <= power){
            base += '0';
            swap(base[point_index], base[point_index + 1]);
            point_index++;
        }
        if(point_index == base.length() - 1) base.erase(point_index);
    }
    else{
        if(power == 0){}
        else{
            while(power > 0){
                swap(base[0], base[1]);
                base = '0' + base;
                power--;
            }
        }
    }
    if(base_sign == '-') base = base_sign + base;
    cout << base << endl;

    return 0;
}