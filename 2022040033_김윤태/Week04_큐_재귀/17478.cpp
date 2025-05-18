#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <queue>
#include <algorithm>

using namespace std;

void recur(int n, string underbar) {
	cout << underbar << "\"����Լ��� ������?\"\n";
	if (n == 0) {
		cout << underbar << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
		cout << underbar << "��� �亯�Ͽ���.\n";
		return;
	}
	cout << underbar << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���. " << endl;
	cout << underbar << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���." << endl;
	cout << underbar << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"" << endl;

	recur(n - 1, underbar + "____");
	cout << underbar << "��� �亯�Ͽ���.\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n;
	cin >> n;
	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	recur(n, "");
}
