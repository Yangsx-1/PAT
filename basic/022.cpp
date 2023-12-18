#include<iostream>

using namespace std;
int main(){
    int a,b,d;
    cin >> a >> b >> d;
    int tran[33] = {0};
    int number = a + b;
    if(number == 0){
        printf("%d", number);
        return 0;
    }
    int i = 0;
    while(number > 0){
        tran[i] = number % d;
        number = number / d;
        ++i;
    }
    for(int j = i-1; j >= 0; --j){
        printf("%d",tran[j]);
    }
    
    return 0;
}
