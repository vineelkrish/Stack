#include <iostream>
using namespace std;

class Stack {
private:
    int arr[1000];  // array to hold stack elements
    int topIndex;   // index of the top element

public:
    Stack() {
        topIndex = -1;  // empty stack
    }

    void push(int x) {
        if (topIndex >= 999) {
            cout << "Stack Overflow\n";
            return;
        }
        arr[++topIndex] = x;
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow\n";
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is empty\n";
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }

    int size() {
        return topIndex + 1;
    }
};

int main(){
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl;  // Output: 20
    cout << "Stack size: " << s.size() << endl;  // Output: 2
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;  // Output: 10
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;  // Output: No
    return 0;
}