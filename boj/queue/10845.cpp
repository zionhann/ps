/**
 * @file 10845.cpp
 * @date 2022-12-11
 * @author Sion Han
 * @from https://www.acmicpc.net/problem/10845
 * @time-taken N/A
 * @difficulty S4
 */

#include <iostream>
#include <vector>

using namespace std;

typedef pair<string, int> Inst;

class MyQueue {
    public:
        MyQueue(int size): arr(new int[size]){}
        ~MyQueue() { delete[] arr; }

        void Push(int val) { arr[++back] = val; size++; }
        int Pop() {if (IsEmpty()) return -1; size--; return arr[front++]; }
        int Size() { return size; }
        bool IsEmpty() { return size == 0; }
        int Front() { return (IsEmpty()) ? -1 : arr[front]; }
        int Back() { return (IsEmpty()) ? -1 : arr[back]; }
    private:
        int* arr;
        int front = 0;
        int back = -1;
        int size = 0;
};

vector<int> Solution(vector<Inst> instructions) {
    vector<int> ans;
    MyQueue* queue = new MyQueue(10000);

    for (Inst i : instructions) {
        if (i.first == "push") {
            queue->Push(i.second);
        } else if (i.first == "front") {
            ans.push_back(queue->Front());
        } else if (i.first == "back") {
            ans.push_back(queue->Back());
        } else if (i.first == "size") {
            ans.push_back(queue->Size());
        } else if (i.first == "pop") {
            ans.push_back(queue->Pop());
        } else if (i.first == "empty") {
            ans.push_back(queue->IsEmpty());
        }
    }
    return ans;
}

int main() {
    int n;

    cin >> n;
    vector<Inst> v(n);

    for (int i = 0; i < n; ++i) {
        cin >> v[i].first;

        if (v[i].first == "push") {
            cin >> v[i].second;
        }
    }
    
    for (int val : Solution(v)) {
        cout << val << '\n';
    }
}