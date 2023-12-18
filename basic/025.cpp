#include<iostream>
#include<algorithm>
using namespace std;

struct node
{
    //int addr;
    int data;
    int next;
};

int main(){
    int n;
    int total_number = 0;
    int inverse_k = 0;
    node* nodes = new node[100001];
    cin >> nodes[100000].next >> n >> inverse_k;
    for(int i = 0; i < n; ++i){
        int tmp_addr, data, next;
        cin >> tmp_addr >> data >> next;
        nodes[tmp_addr].data = data;
        nodes[tmp_addr].next = next;
        //nodes[tmp_addr].addr = tmp_addr;
    }
    int tmp_start = nodes[100000].next;
    node* nodes_ = new node[100001];
    nodes_[100000] = nodes[100000];
    while(tmp_start != -1){
        total_number++;
        nodes_[tmp_start] = nodes[tmp_start];
        tmp_start = nodes[tmp_start].next;
    }
    int heading = 100000;
    int head_addr = nodes_[heading].next;
    int tail_addr = nodes_[head_addr].next;
    while(total_number >= inverse_k){
        int start_addr = head_addr;
        int tmp_addr;
        for(int i = inverse_k; i > 1; i--){
            tmp_addr = nodes_[tail_addr].next;
            nodes_[tail_addr].next = head_addr;
            head_addr = tail_addr;
            tail_addr = tmp_addr;
            if(tail_addr == -1) break;
        }
        nodes_[heading].next = head_addr;
        nodes_[start_addr].next = tail_addr;
        heading = start_addr;
        head_addr = nodes_[heading].next;
        tail_addr = nodes_[head_addr].next;
        
        total_number -= inverse_k;
    }
    int it_addr = 100000;
    while(nodes_[it_addr].next != -1){
        it_addr = nodes_[it_addr].next;
        if(nodes_[it_addr].next != -1) 
            printf("%05d %d %05d\n", it_addr, nodes_[it_addr].data, nodes_[it_addr].next);
        else
            printf("%05d %d %d\n", it_addr, nodes_[it_addr].data, nodes_[it_addr].next);
    }
    delete[] nodes_;
    delete[] nodes;

    return 0;
}