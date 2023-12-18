#include<stdio.h>
#include<string.h>

int main(){
    char num[1001] = {0};
    int count[10] = {0};
    scanf("%s", num);
    int n = strlen(num);
    for(int i = 0; i < n; ++i){
        count[num[i] - '0']++;
    }
    for(int i = 0; i < 10; ++i){
        if(count[i] != 0) printf("%d:%d\n", i, count[i]);
    }

    return 0;
}