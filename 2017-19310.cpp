#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void swap(int *i, int *j) {
	int temp = *i;
	*i = *j;
	*j = temp;
}

void main() {
	vector <int> NumberList;
	auto num = 0;
	while (cin >> num) {
		if (num != EOF)
			NumberList.push_back(num);
	}
	for (int i = 0; i < NumberList.size(); i++) {
		for (int j = 0; j < NumberList.size() - i - 1; j++) {
			if (NumberList[j] < NumberList[j + 1])
				swap(&NumberList[j], &NumberList[j + 1]);
		}
	}
	cout << "ordered array" << endl;
	for (auto i : NumberList) {
		cout << i << " ";
	}
	cout << endl;
}