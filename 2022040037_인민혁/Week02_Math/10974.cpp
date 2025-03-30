#include <iostream>
#include <vector>
using namespace std;

void swap(int& n1, int& n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

bool permutation(vector<int>& arr, int n) {
    int i = n - 1; // �� �ڿ������� ����

    while (i > 0 && arr[i - 1] >= arr[i]) { // ���������� ���������� ã�´�.
        i -= 1;
    }
    if (i <= 0) return false;   // i�� 0���� ���� �� �������� -> ������ ���� ���� �� �� �ִ�.

    int j = n - 1;
    while (arr[j] <= arr[i - 1]) {  // ���������� �������� �ٷ� ������ ������ ū �� �� ���� ���� ���� ã�´�.
        j -= 1;
    }
    swap(arr[i - 1], arr[j]);   // �̿� ���������� �������� �ٷ� ������ ���� �ٲ��ش�. -> �̷��� �ص� �������� ������ ������������ �����ȴ�.

    j = n - 1;
    while (i < j) { // �������� ������ ������������ �����Ѵ�. -> �̸� ���� ���������� ����� �ȴ�.
        swap(arr[i], arr[j]);
        i += 1;
        j -= 1;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) arr.at(i) = i + 1;
    do {
        for (int i = 0; i < n; i++) {
            cout << arr.at(i) << ' ';
        }
        cout << '\n';
    } while (permutation(arr, n));
}