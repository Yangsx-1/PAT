#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

bool cmp(int a,int b){
    return a<b;
}

int main(){
    vector<int> input;
    int tmp;
    while(cin >> tmp){
        input.push_back(tmp);
    }
    for(int i=0;i<10;++i){
        for(int j=0;j<input[i];++j){
            input.push_back(i);
        }
    }
    input.erase(input.begin(),input.begin()+10);
    vector<int> out;
    for(int i=0;i<input.size();++i){
        if(input[i]!=0){
            out.push_back(input[i]);
            input.erase(input.begin()+i);
            break;
        }
    }
    for(int i=0;i<input.size();++i){
        out.push_back(input[i]);
    }
    for(int i=0;i<out.size();++i)
        cout << out[i];
    
    return 0;
}
