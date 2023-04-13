#include <iostream>
#include <string>

using namespace std;

bool isValid(int choice) {
    if (choice == 0)
        return 0;
    int left = 1, right = 7;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (mid == choice)
            return 1;
        else if (mid < choice)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return 0;
}

void inputChoice(int& choice) {
    do {
        cout << ">>> Nhập vào lựa chọn của bạn: ";
        string input;
        fflush(stdin);
        getline(cin, input);
        choice = atoi(input.c_str());
        isValid(choice) ? cout << "Lựa chọn của bạn là: " << choice << endl
                               : cout << "Nhập sai format, vui lòng nhập lại!" << endl;
    } while (!isValid(choice));
    return;
}