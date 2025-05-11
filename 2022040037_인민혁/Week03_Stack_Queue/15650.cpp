#include <iostream>
#include <vector>
using namespace std;

void swap(int& n1, int& n2) {
    int tmp = n1;
    n1 = n2;
    n2 = tmp;
}

bool permutation(vector<int>& arr, int n) {
    int i = n - 1; // 맨 뒤에서부터 시작

    while (i > 0 && arr[i - 1] >= arr[i]) { // 내림차순의 시작지점을 찾는다.
        i -= 1;
    }
    if (i <= 0) return false;   // i가 0까지 오면 다 내림차순 -> 순열의 끝에 옴을 알 수 있다.

    int j = n - 1;
    while (arr[j] <= arr[i - 1]) {  // 내림차순의 시작점의 바로 왼쪽의 수보다 큰 수 중 가장 작은 수를 찾는다.
        j -= 1;
    }
    swap(arr[i - 1], arr[j]);   // 이와 내림차순의 시작점의 바로 왼쪽의 수랑 바꿔준다. -> 이렇게 해도 내림차순 구역은 내림차순으로 유지된다.

    j = n - 1;
    while (i < j) { // 내림차순 구역을 오름차순으로 정렬한다. -> 이를 통해 사전순으로 출력이 된다.
        swap(arr[i], arr[j]);
        i += 1;
        j -= 1;
    }
    return true;
}
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int n, r;
    cin >> n >> r;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) arr.at(i) = i + 1;
    vector<int> tmp(n, 1);
    for (int i = 0; i < r; i++) tmp.at(i) = 0;
    do {
        for (int i = 0; i < n; i++) {
            if (tmp.at(i) == 0)
                cout << arr.at(i) << ' ';
        }
        cout << '\n';
    } while (permutation(tmp, n));
}