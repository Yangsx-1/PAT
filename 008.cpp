#include<iostream>
#include<vector>
using namespace std;

void reverse(vector<int> &nums, int l, int r){
    while(l<r){
        int tmp = nums[l];
        nums[l] = nums[r];
        nums[r] = tmp;
        ++l;--r;
    }
}

int main(){
    int n,m;
    cin >> n >> m;
    vector<int> nums;
    for(int i=0; i<n; ++i){
        int tmp;
        cin >> tmp;
        nums.push_back(tmp);
    }
    m = m % n;
    reverse(nums,0,n-m-1);
    reverse(nums,n-m,n-1);
    reverse(nums,0,n-1);
    for(int i=0;i<n;++i){
        cout << nums[i];
        if(i != n-1) cout << ' ';
    }
    return 0;
}
