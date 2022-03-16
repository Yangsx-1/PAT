#include<iostream>

using namespace std;
int score[100001] = {0};
int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i){
        int idx = 0,grade = 0;
        cin >> idx >> grade;
        score[idx]+=grade;
    }
    int maxid = 0,maxgrade = -1;
    for(int i = 1; i <= n; ++i){
        if(maxgrade < score[i]){
            maxid = i;
            maxgrade = score[i];
        }
    }
    cout << maxid << " " << maxgrade << endl;
    
    return 0;
}
