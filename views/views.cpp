#include <iostream>
#include <string>
#include "D:\Entertainment\Pet_Projects\BTL_TTCSN_KTPM\controller\input_controller.cpp"

using namespace std;

void showMenu() {
    int choice;
    int i;
    do {
        i = 0;
        cout << ++i << ". Bubble Sort" << endl;
        cout << ++i << ". Selection Sort" << endl;
        cout << ++i << ". Insertion Sort" << endl;
        cout << ++i << ". Merge Sort" << endl;
        cout << ++i << ". Quick Sort" << endl;
        cout << ++i << ". Heap Sort" << endl;
        cout << ++i << ". Exit" << endl;
        inputChoice(choice);
        system("cls");
    } while (choice != i);
    return;
}
