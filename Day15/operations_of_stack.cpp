# include <iostream>
using namespace std;

class Stack {
private:
    int arr[100];
    int top;

public:
    Stack() {
        top = -1;
    }
void push(int data) {
        if (top < 99) {
            top++;
            arr[top] = data;
        } else {
            cout << "Stack overflow" << endl;
        }
    }
    void pop() {
        if (top == -1) {
            cout << "Stack underflow" << endl;
        } else {
            top--;
        }
    }

    bool isEmpty() {
        return (top == -1);
    }

    int size() {
        return top + 1;
    }

    void display() {
        if (isEmpty()) {
            cout << "Stack is empty" << endl;
            return;
        }

        for (int i = top; i >= 0; i--) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    s.display();

    cout << "Size: " << s.size() << endl;
    cout << "Empty? " << s.isEmpty() << endl;

    s.pop();
    cout << "After pop, size: " << s.size() << endl;
    cout << "Empty? " << s.isEmpty() << endl;
} 