#include<iostream>
#include<stdio.h>
#include<string>
#include<algorithm>
using namespace std;

int reverse_num(int number){
    int reverse_number = 0;
    while(number > 0){
        int res = number % 10;
        reverse_number = reverse_number * 10 + res;
        number /= 10;
    }
    return reverse_number;
}

string reverse_str(int number){
    string str = to_string(number);
    reverse(str.begin(), str.end());
    return str;
}

int main(){
    int input_number;
    cin >> input_number;
    string input_str = to_string(input_number);
    sort(input_str.begin(), input_str.end(), greater<char>());
    while(input_str.length() != 4){
        input_str += '0';
    }
    int start_number = stoi(input_str);
    string result;
    while(start_number - reverse_num(start_number) != 6174 && 
        start_number - reverse_num(start_number) != 0){
        result = to_string(start_number - reverse_num(start_number));
        while(result.length() != 4){
            result = '0' + result;
        }
        cout << start_number << " - " << reverse_str(start_number) << " = " 
        << result << endl;
        string tmp_str = to_string(start_number - reverse_num(start_number));
        sort(tmp_str.begin(), tmp_str.end(), greater<char>());
        while(tmp_str.length() != 4){
            tmp_str += '0';
        }
        start_number = stoi(tmp_str);
    }
    if(start_number - reverse_num(start_number) == 6174)
    cout << start_number << " - " << reverse_str(start_number) << " = " 
        << start_number - reverse_num(start_number) << endl;

    else
    cout << start_number << " - " << reverse_str(start_number) << " = " 
        << "0000" << endl;

    return 0;
}