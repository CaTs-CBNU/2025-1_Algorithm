#include<iostream>
#include<queue>
using namespace std;

void bar(int n) {
	for (int i = 0;i < n;i++) {
		cout << "____";
	}
}

void re(int cur , int max) {
	bar(cur);
	cout << "\"����Լ��� ������?\"\n";
	if (cur == max) {
		bar(cur);
		cout << "\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
	}
	else {
		bar(cur);
		cout << "\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
		bar(cur);
		cout << "���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
		bar(cur);
		cout << "���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
		re(cur + 1, max);
	}
	
	bar(cur);
	cout << "��� �亯�Ͽ���.\n";
}

int main(void) {
	

	int n;
	cin >> n;

	cout << "��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n";
	re(0,n);


}