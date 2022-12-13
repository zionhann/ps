#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef pair<string, int> Inst;

class MyDeque {
    public:
        MyDeque(int capa): arr(new int[capa]), capa(capa){}
        ~MyDeque() { delete[] arr; }
        void PushFront(int val) { arr[front] = val; front = (front-1+capa)%capa; size++; }
        void PushBack(int val) { back = (back+1)%capa; arr[back] = val; size++; }
        int PopFront() { if (IsEmpty()) return -1; size--; front = (front+1+capa)%capa; return arr[front]; }
        int PopBack() { if (IsEmpty()) return -1; size--; int index = back; back = (back-1+capa)%capa; return arr[index]; }
        int Size() { return size; }
        bool IsEmpty() { return front == back; }
        int Front() { return (IsEmpty()) ? -1 : arr[(front+1+capa)%capa]; }
        int Back() { return (IsEmpty()) ? -1 : arr[back]; }
    private:
        int* arr;
        int capa;
        int size = 0;
        int front = 0;
        int back = 0;
};

vector<int> Solution(vector<Inst>& insts) {
    MyDeque* deque = new MyDeque(10000);
    vector<int> ans;

    for (auto inst : insts) {
        if (inst.first == "push_front") {
            deque->PushFront(inst.second);
        } else if (inst.first == "push_back") {
            deque->PushBack(inst.second);
        } else if (inst.first == "pop_front") {
            ans.push_back(deque->PopFront());
        } else if (inst.first == "pop_back") {
            ans.push_back(deque->PopBack());
        } else if (inst.first == "size") {
            ans.push_back(deque->Size());
        } else if (inst.first == "empty") {
            ans.push_back(deque->IsEmpty());
        } else if (inst.first == "front") {
            ans.push_back(deque->Front());
        } else if (inst.first == "back") {
            ans.push_back(deque->Back());
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

        if (v[i].first.find("push") != string::npos) {
            cin >> v[i].second;
        }
    }
    
    for (int val : Solution(v)) {
        cout << val << '\n';
    }
}