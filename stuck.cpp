#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node *next;

    Node() {
        next = NULL;
    }
};

class stack {
private:
    Node *top;

public:
    stack() {
        top = NULL;
    }
    int push(int value) {
            Node *newNode = new Node();
            newNode->data = value;
            newNode->next = top;
            top = newNode;
            cout << "Push value: " << value << endl;
            return value;
        }

    void pop() {
        if (isEmpty()) {
            cout << "Stack is empty." << endl;
        } else {
            Node *temp = top;
            int poppedVal = temp->data; // Ambil datanya sebelum dihapus
            top = top->next;
            delete temp; // Penting: Hapus node lama dari memori
            cout << "Popped value: " << poppedVal << endl;
        }
    }

    void peek() {
        if (isEmpty()) {
            cout << "List is empty." << endl;
            } else {
            // Perbaikan logika: Peek seharusnya hanya melihat tumpukan teratas,
            // bukan melakukan looping ke seluruh isi list.
            cout << "Top value: " << top->data << endl;
        }
    }

    bool isEmpty() {
        return top == NULL;
    }
};

int main() {
    stack stack;
    int choice = 0;
    int value;

    while (choice != 4) {
        cout << "1.push\n";
        cout << "2.pop\n";
        cout << "3.peek\n";
        cout << "4.Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
}