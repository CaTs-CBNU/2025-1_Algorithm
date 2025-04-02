#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

void swap(int numbers[], int i, int k) {
    int temp = numbers[i];
    numbers[i] = numbers[k];
    numbers[k] = temp;
}

bool np(int numbers[], int size,int size2) {
     int* n = new int[size2];
    for (int t = 0; t < size2; t++) {
        n[t] = numbers[t];
    }
    
    while(1){
    int i = size - 1;
  
    while (numbers[i - 1] >= numbers[i])i--;

    if (i == 0)return false;

    int j = size - 1;

    while (numbers[i - 1] >= numbers[j])j--;

    swap(numbers, i - 1, j);

    int k = size - 1;
    while (i < k) {
        swap(numbers, i++, k--);
    }
    for (int t = 0; t < size2; t++) {
        if (n[t] != numbers[t]) {
            delete []n;
            return true;
        }
    }
    }
}


int main() {
    int num1, num2;

    cin >> num1 >> num2;
    int *numbers;
    numbers = new int[num1];
    for (int i = 0; i < num1; i++) {
        numbers[i] = i + 1;
    }
    for (int i = 0; i < num2; i++) {
        cout << numbers[i] << " ";
    }
    cout << "\n";
    while (np(numbers, num1,num2)) {
        for (int i = 0; i < num2; i++) {
            cout << numbers[i] << " ";
        }
        cout << "\n";
    }
    delete[]numbers;
}
