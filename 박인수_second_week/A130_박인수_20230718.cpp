#include <iostream>
#include <vector>

using namespace std;

struct Stack {
    vector<int> items;
};

using stack = Stack *;

stack newStack() {
    stack s = new Stack;
    return s;
}

void pop(stack s) {
    s->items.pop_back();
}

int top(stack s) {
    return s->items.back();
}

void push(stack s, int item) {
    s->items.push_back(item);
}

int main() {
    stack s = newStack();
    int n = 0, input = 0, sum = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> input;
        if (input == 0) {
            pop(s);
        } else {
            push(s, input);
        }
    }

    while (!s->items.empty()) {
        sum += top(s);
        pop(s);
    }

    cout << sum << endl;

    return 0;
}