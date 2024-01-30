//A stack is a data structure that follows the Last In, First Out (LIFO) principle, where elements are added and removed from the same end, resembling a stack of plates.

#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 10

int stack[MAX_SIZE];
int top = -1;

// Function prototypes
void push(int value);
int pop();
void display();

int main() {
    int choice, value;

    do {
        // Display menu
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                value = pop();
                if (value != -1) {
                    printf("Popped value: %d\n", value);
                }
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting the program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (choice != 4);

    return 0;
}

// Function to push a value onto the stack
void push(int value) {
    if (top == MAX_SIZE - 1) {
        printf("Stack overflow. Cannot push more elements.\n");
    } else {
        stack[++top] = value;
        printf("%d pushed to the stack.\n", value);
    }
}

// Function to pop a value from the stack
int pop() {
    if (top == -1) {
        printf("Stack underflow. Cannot pop from an empty stack.\n");
        return -1;
    } else {
        return stack[top--];
    }
}

// Function to display the elements of the stack
void display() {
    if (top == -1) {
        printf("Stack is empty.\n");
    } else {
        printf("Stack elements: ");
        for (int i = 0; i <= top; ++i) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}
