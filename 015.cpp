#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

struct student
{
    int id;
    int ethics_score;//德
    int talent_score;//才
    int total_score;
};

bool cmp(student a, student b){
    if(a.total_score != b.total_score){
        return a.total_score > b.total_score;
    }else if(a.ethics_score != b.ethics_score){
        return a.ethics_score > b.ethics_score;
    }else{
        return a.id < b.id;
    }
}

int main(){
    int n, low, high;
    cin >> n >> low >> high;
    vector<student> de_cai_quan, de_sheng_cai, de_cai_wang, others;
    int student_reach_low = 0;
    for(int i = 0; i < n; i++){
        student stu;
        cin >> stu.id >> stu.ethics_score >> stu.talent_score;
        stu.total_score = stu.ethics_score + stu.talent_score;
        if(stu.ethics_score >= low && stu.talent_score >= low){
            student_reach_low++;
            if(stu.ethics_score >= high && stu.talent_score >= high){
                de_cai_quan.push_back(stu);
            }else if(stu.ethics_score >= high && stu.talent_score < high){
                de_sheng_cai.push_back(stu);
            }else if(stu.ethics_score < high && stu.talent_score < high
            && stu.ethics_score >= stu.talent_score){
                de_cai_wang.push_back(stu);
            }else{
                others.push_back(stu);
            }
        }
    }
    sort(de_cai_quan.begin(), de_cai_quan.end(), cmp);
    sort(de_sheng_cai.begin(), de_sheng_cai.end(), cmp);
    sort(de_cai_wang.begin(), de_cai_wang.end(), cmp);
    sort(others.begin(), others.end(), cmp);
    cout << student_reach_low << endl;
    for(auto stu : de_cai_quan){
        cout << stu.id << ' ' << stu.ethics_score << ' ' 
        << stu.talent_score << endl;
    }
    for(auto stu : de_sheng_cai){
        cout << stu.id << ' ' << stu.ethics_score << ' ' 
        << stu.talent_score << endl;
    }
    for(auto stu : de_cai_wang){
        cout << stu.id << ' ' << stu.ethics_score << ' ' 
        << stu.talent_score << endl;
    }
    for(auto stu : others){
        cout << stu.id << ' ' << stu.ethics_score << ' ' 
        << stu.talent_score << endl;
    }

    return 0;
}