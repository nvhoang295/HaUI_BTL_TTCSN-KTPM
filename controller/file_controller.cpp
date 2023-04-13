#include <bits/stdc++.h>

using namespace std;

#define endl "\n"

void createFile(char *filename, int n){
    srand(time(NULL));
    ofstream file(filename, ios_base::out);
    file << n << endl;
    for (int i = 0; i < n; i++) file << rand() % 50 << " ";
    file.close();
}

void readFile(char *filename, int *&arr, int &n){
    ifstream file(filename, ios_base::in);
    char temp[1000];
    file >> temp;
    cout << temp << endl;
    n = atoi(temp);
    arr = new int[n];
    for(int i = 0; i < n; ++i){
        file >> temp;
        cout << temp << endl;
        arr[i] = atoi(temp);
    }
    cout << "Read file completed" << endl;
    file.close();
}

