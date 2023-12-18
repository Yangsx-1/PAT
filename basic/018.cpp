#include<iostream>

using namespace std;
int main(){
    int n;
    int win = 0, loss = 0, equal = 0;
    int count1[3] = {0};
    int count2[3] = {0};//布(B)、石头(C)、剪子(J)
    cin >> n;
    for(int i = 0; i < n; ++i){
        char first, second;
        cin >> first >> second;
        if((first == 'C' && second == 'J') || (first == 'J' && second == 'B') 
        || (first == 'B' && second == 'C')){
            win++;
            if(first == 'C') count1[1]++;
            else if(first == 'J') count1[2]++;
            else count1[0]++;
        }else if(first == second){
            equal++;
        }else{
            loss++;
            if(second == 'C') count2[1]++;
            else if(second == 'J') count2[2]++;
            else count2[0]++;
        }
    }
    cout << win << ' ' << equal << ' ' << loss << endl;
    cout << loss << ' ' << equal << ' ' << win << endl;

    char max1 = count1[0]>=count1[1]&&count1[0]>=count1[2] ? 'B' : (count1[1]>=count1[2] ? 'C' : 'J');
    char max2 = count2[0]>=count2[1]&&count2[0]>=count2[2] ? 'B' : (count2[1]>=count2[2] ? 'C' : 'J');
    cout << max1 << ' ' << max2 << endl;

    return 0;
}