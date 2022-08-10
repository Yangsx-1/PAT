#include<stdio.h>
#include<math.h>

int ifprime(int n){
    float m = sqrt(n);
    int flag = 1;
    for(int i = 2; i <= m; ++i){
        if(n % i == 0){
            flag = 0;
            break;
        }
    }
    return flag;
}

int main(){
    int m,n;
    scanf("%d %d", &m, &n);
    int count = 0;//数素数个数
    int number = 2;
    int pnumber = 0;
    while(count <= n){
        int flag = ifprime(number);
        if(flag == 1){
            count++;
            if(count >= m && count <= n){
                pnumber++;
                if(pnumber % 10 != 0){
                    if(count != n) printf("%d ", number);
                    else printf("%d", number);
                }
                else printf("%d\n", number);
            }
        }
        number++;
    }
    
    return 0;
}
