#include <iostream>
#include <vector>
#include <string>

using namespace std;

typedef pair<string, int> Inst;

class MyStack {
    public:
        MyStack(int size): arr(new int[size]){}
        ~MyStack() { delete[] arr; }

        bool IsEmpty() { return top == -1; }
        int Size() { return size; }
        void Push(int val) { size++; arr[++top] = val; }
        int Pop() { if (IsEmpty()) { return -1; } size--; return arr[top--]; }
        int Top() { return (IsEmpty()) ? -1 : arr[top]; }
    private:
        int* arr;
        int top = -1;
        int size = 0;
};

vector<int> Solution(vector<Inst>& instructions) {
    MyStack* my_stack = new MyStack(10000);
    vector<int> ans;

    for (Inst i : instructions) {
        if (i.first == "push") {
            my_stack->Push(i.second);
        } else if (i.first == "top") {
            ans.push_back(my_stack->Top());
        } else if (i.first == "size") {
            ans.push_back(my_stack->Size());
        } else if (i.first == "pop") {
            ans.push_back(my_stack->Pop());
        } else if (i.first == "empty") {
            ans.push_back(my_stack->IsEmpty());
        }
    }
    delete my_stack;
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