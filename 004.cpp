#include<iostream>
#include<string>

using namespace std;

struct stu{
    string name;
    string code;
    int grade;
};

int main(){
    int n;
    cin >> n;
    string name,code;
    int grade,min = 100,max = 0;
    struct stu stu_min, stu_max;
    for(int i = 0; i < n; ++i){
        cin >> name >> code >> grade;
        if(grade <= min){
            stu_min.name = name;
            stu_min.code = code;
            stu_min.grade = grade;
            min = grade;
        }
        if(grade >= max){
            stu_max.name = name;
            stu_max.code = code;
            stu_max.grade = grade;
            max = grade;
        }
    }
    cout << stu_max.name << " " << stu_max.code << endl;
    cout << stu_min.name << " " << stu_min.code << endl;
    
    return 0;
}
