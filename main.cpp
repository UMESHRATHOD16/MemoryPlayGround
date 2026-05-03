#include <iostream>
using namespace std;

void showMenu() {
    cout << "\n--- Memory Playground ---\n";
    cout << "1. Stack vs Heap\n";
    cout << "2. Dangling Pointer\n";
    cout << "3. Memory Reuse\n";
    cout << "4. Null Pointer Crash\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 0) break;

    }
}