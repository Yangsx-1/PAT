#include<iostream>
#include<cmath>
using namespace std;

bool judge(int a){
    int s = sqrt(a);
    for(int i = 2; i <= s; ++i){
        if(a % i == 0) return false;
    }
    return true;
}

int main(){
    int n;
    cin >> n;
    int p1 = 1;
    int p2 = p1;
    int count = 0;
    while(p2 <= n){
        if(!judge(p2)) ++p2;
        else{
            if(p2 - p1 == 2) count++;
            p1 = p2;
            ++p2;
        }
    }
    cout << count << endl;
    
    return 0;
}
