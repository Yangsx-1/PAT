#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct mooncake{
    double store;
    double price;
    double unit;
}cake[1010];

bool cmp(mooncake a, mooncake b){
    return a.unit > b.unit;
}

int main(){
    int n;
    double d;
    cin >> n >> d;
    for(int i=0;i<n;++i){
        cin >> cake[i].store;
    }
    for(int i=0;i<n;++i){
        cin >> cake[i].price;
        cake[i].unit = cake[i].price / cake[i].store;
    }
    sort(cake,cake+n,cmp);
    double total = 0;
    for(int i=0;i<n;++i){
        if(cake[i].store <= d){
            d -= cake[i].store;
            total += cake[i].price;
        }
        else{
            total += cake[i].unit*d;
            break;
        }
    }
    printf("%.2f", total);
    
    return 0;
}
