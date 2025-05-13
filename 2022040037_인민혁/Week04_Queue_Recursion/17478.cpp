#include <iostream>
#include <string>

using namespace std;

int n;
void stopProfessor(int depth) {
	string underBar = string(depth * 4, '_');
	cout << underBar << "\"����Լ��� ������?\"\n";
	if (depth == n)
		cout << underBar << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	else {
		cout << underBar << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		cout << underBar << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		cout << underBar << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		stopProfessor(depth + 1);
	}
	cout << underBar << "��� �亯�Ͽ���.\n";
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	stopProfessor(0);
}