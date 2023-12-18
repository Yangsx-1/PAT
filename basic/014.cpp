#include<stdio.h>
#include<iostream>
#include<string>
#include<map>
using namespace std;

map<char, string> date
    {{'A',"MON"},{'B',"TUE"},{'C',"WED"},{'D',"THU"},
    {'E',"FRI"},{'F',"SAT"},{'G',"SUN"}};

map<char, int> hour
    {{'A',10},{'B',11},{'C',12},{'D',13},{'E',14},{'F',15},
     {'G',16},{'H',17},{'I',18},{'J',19},{'K',20},{'L',21},
     {'M',22},{'N',23}};

int main(){
    string str1,str2,str3,str4;
    cin >> str1 >> str2 >> str3 >> str4;
    int comp1 = (str1.size() < str2.size()) ? str1.size():str2.size();
    int comp2 = (str3.size() < str4.size()) ? str3.size():str4.size();
    int flag = 0;
    for(int i = 0; i < comp1; ++i){
        if(flag == 0 && str1[i] == str2[i] && str1[i] >= 'A' && str1[i] <= 'G'){
            cout << date[str1[i]] << ' ';
            flag = 1;
        }
        else if(str1[i] == str2[i] && flag == 1){
            if(str1[i] >= '0' && str1[i] <= '9'){
                cout << '0' << str1[i] << ':';
                break;
            }
            else if(str1[i] >= 'A' && str1[i] <= 'N'){
                cout << hour[str1[i]] << ':';
                break;
            }
        }
    }
    for(int i = 0; i < comp2; ++i){
        if(str3[i] == str4[i] && ((str3[i]>='A'&&str3[i]<='Z')||(str3[i]>='a'&&str3[i]<='z'))){
            if(i >= 0 && i <= 9){
                cout << '0' << i;
            }
            else{
                cout << i;
            }
            break;
        }
    }
    
    return 0;
}
