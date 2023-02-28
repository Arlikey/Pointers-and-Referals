#include <iostream>
using namespace std;

void randInitArr(int* arr, int size) {
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20 - 10;
	}
}

void showArr(int* arr, int size) {
	cout << "������: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void sumAndMulArr(int* arr, int size, int* sum, int* mul) {
	for (int i = 0; i < size; i++) {
		*(sum) += arr[i];
		*(mul) *= arr[i];
	}
	cout << "���������: " << endl;
}

void sumAndMulArr(int* arr, int size, int& sum, int& mul) {
	for (int i = 0; i < size; i++){
		sum += arr[i];
		mul *= arr[i];
	}
	cout << "������: " << endl;
}

int main() {
	setlocale(LC_ALL, "");

	int psum = 0, rsum = 0, pmul = 1, rmul = 1;
	int* ptrSum = &psum;
	int* ptrMul = &pmul;
	int& refSum = rsum;
	int& refMul = rmul;

	int size;
	cout << "������� ������ �������: ";
	cin >> size;
	int* arr = new int[size];

	randInitArr(arr, size);
	showArr(arr, size);

	sumAndMulArr(arr, size, ptrSum, ptrMul);

	cout << "\n����� ���������: " << psum << endl;
	cout << "������������ ���������: " << pmul << endl;

	sumAndMulArr(arr, size, refSum, refMul);

	cout << "\n����� ���������: " << rsum << endl;
	cout << "������������ ���������: " << rmul << endl;

	return 0;
}