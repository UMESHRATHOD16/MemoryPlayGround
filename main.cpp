#include <iostream>
using namespace std;

int globalVar = 100 ;

void showMenu() {
    cout << "\n--- Memory Playground ---\n";
    cout << "1. Stack vs Heap\n";
    cout << "2. Dangling Pointer\n";
    cout << "3. Memory Reuse\n";
    cout << "4. Null Pointer Crash\n";
    cout << "0. Exit\n";
}

void stackVsHeap() {
    int x = 10;
    int* p = new int(20);

    cout << "Global: " << &globalVar << endl;
    cout << "Stack: " << &x << endl;
    cout << "Heap: " << p << endl;

    delete p;
}

void danglingPointerDemo() {
    int* p = new int(42);

    cout << "Before delete: " << *p << endl;

    delete p;

   p = nullptr;  // reset pointer to avoid dangling pointer access (prevents use-after-free bugs)

    cout << "After delete (dangling): " << *p << endl;  // accessing the data which is freed shows undefined behaviour
}

void memoryReuseDemo() {
    int* p = new int(20);
    cout << "p address: " << p << " value: " << *p << endl;

    delete p;

    int* q = new int(99);
    cout << "q address: " << q << " value: " << *q << endl;

    cout << "Accessing p again: " << *p << endl;  // undefined behaviour
}

int main() {
    int choice;

    while (true) {
        showMenu();
        cin >> choice;

        if (choice == 0) break;
        if (choice == 1) stackVsHeap();
        if (choice == 2) danglingPointerDemo();
        if (choice == 3) memoryReuseDemo();

    }
}