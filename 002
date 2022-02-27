#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){
    char n;
    int sum = 0;
    while((n = getchar()) != '\n'){
        sum = sum + n - '0';
    }
    stack<int> s;
    while(sum != 0){
        int tmp = sum % 10;
        s.push(tmp);
        sum = sum / 10;
    }
    string name[10] = {"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    while(!s.empty()){
        int tmp = s.top();
        s.pop();
        cout << name[tmp];
        if(!s.empty()){
            cout << " ";
        }
    }
    
    return 0;
}
