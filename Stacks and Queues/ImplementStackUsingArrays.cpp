#include<bits/stdc++.h>
using namespace std;

class Stack {
    int size;
    int *arr;
    int top;
public:
    Stack(int s) { // Constructor with dynamic size allocation
        top = -1;
        size = s;
        arr = new int[size];
    }

    ~Stack() { // Destructor to free memory
        delete[] arr;
    }

    void push(int x) {
        if (top == size - 1) {
            cout << "Stack Overflow: Cannot push " << x << endl;
        } else {
            top++;
            arr[top] = x;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Stack Underflow: No element to pop" << endl;
            return -1;
        } else {
            int x = arr[top];
            top--;
            return x;
        }
    }

    int Top() {
        if (top == -1) {
            cout << "Stack is empty, no top element" << endl;
            return -1;
        } else {
            return arr[top];
        }
    }

    int Size() {
        return top + 1;
    }

    bool isEmpty() {
        return top == -1;
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
            return;
        }
        cout << "Stack elements: ";
        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s(5); // Stack of size 5
    s.push(6);
    s.push(3);
    s.push(7);
    
    cout << "Top of stack is before deleting any element: " << s.Top() << endl;
    cout << "Size of stack before deleting any element: " << s.Size() << endl;
    s.display();
    
    cout << "The element deleted is: " << s.pop() << endl;
    cout << "Size of stack after deleting an element: " << s.Size() << endl;
    cout << "Top of stack after deleting an element: " << s.Top() << endl;

    s.display();
    
    // Pop more to test underflow
    s.pop();
    s.pop();
    s.pop(); // Should display underflow message

    return 0;
}
