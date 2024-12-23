#include <iostream>
#define MAX 100 // Maximum size of the stack

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1; // Initialize stack as empty
    }

    // Function to add an element to the stack
    void push(int value) {
        if (top >= MAX - 1) {
            std::cout << "Stack Overflow! Cannot push " << value << std::endl;
            return;
        }
        arr[++top] = value;
        std::cout << value << " pushed into stack.\n";
    }

    // Function to remove the top element of the stack
    void pop() {
        if (top < 0) {
            std::cout << "Stack Underflow! Cannot pop.\n";
            return;
        }
        std::cout << arr[top--] << " popped from stack.\n";
    }

    // Function to display all elements in the stack
    void display() {
        if (top < 0) {
            std::cout << "Stack is empty.\n";
            return;
        }
        std::cout << "Stack elements: ";
        for (int i = 0; i <= top; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Stack stack;
    int choice, value;

    do {
        std::cout << "\nMenu:\n";
        std::cout << "1. Push\n";
        std::cout << "2. Pop\n";
        std::cout << "3. Display\n";
        std::cout << "4. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Enter value to push: ";
                std::cin >> value;
                stack.push(value);
                break;
            case 2:
                stack.pop();
                break;
            case 3:
                stack.display();
                break;
            case 4:
                std::cout << "Exiting...\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
