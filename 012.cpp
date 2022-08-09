#include<stdio.h>

int main(){
    int a1 = 0,a2 = 0,a3 = 0,a4 = 0,a5 = 0;//a1为偶数和，a2为交错和，a3为个数，a4为个数，a5为最大数
    float a4_avg = 0;//记录总和和平均数
    int N;
    scanf("%d", &N);
    int flag = 1;
    int a2_flag = 0;
    for(int i = 1; i <= N; ++i){
        int n;
        scanf("%d", &n);
        int m = n % 5;
        switch(m){
            case 0:
                if(n % 2 == 0) a1+=n;
                break;
            case 1:
                a2 += (flag*n);
                flag *= (-1);
                a2_flag++;
                break;
            case 2:
                a3 += 1;
                break;
            case 3:
                a4 += 1;
                a4_avg += n;
                break;
            case 4:
                if(n > a5) a5 = n;
                break;
        }
    }
    if(a4 != 0) a4_avg = a4_avg / a4;
    if(a1 == 0) printf("N ");
    else printf("%d ",a1);
    if(a2_flag == 0) printf("N ");
    else printf("%d ",a2);
    if(a3 == 0) printf("N ");
    else printf("%d ",a3);
    if(a4_avg == 0) printf("N ");
    else printf("%.1f ",a4_avg);
    if(a5 == 0) printf("N");
    else printf("%d",a5);
    
    return 0;
}
