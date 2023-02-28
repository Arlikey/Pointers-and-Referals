#include <iostream>
using namespace std;

void randInitArr(int* arr, int size);
void showArr(int* arr, int size);

	//	Задание 1.
/*
void sumAndMulArr(int* arr, int size, int* sum, int* mul) {
	for (int i = 0; i < size; i++) {
		*(sum) += arr[i];
		*(mul) *= arr[i];
	}
	cout << "Указатели: " << endl;
}

void sumAndMulArr(int* arr, int size, int& sum, int& mul) {
	for (int i = 0; i < size; i++){
		sum += arr[i];
		mul *= arr[i];
	}
	cout << "Ссылки: " << endl;
}

int main() {
	setlocale(LC_ALL, "");

	int psum = 0, rsum = 0, pmul = 1, rmul = 1;
	int* ptrSum = &psum;
	int* ptrMul = &pmul;
	int& refSum = rsum;
	int& refMul = rmul;

	int size;
	cout << "Введите размер массива: ";
	cin >> size;
	int* arr = new int[size];

	randInitArr(arr, size);
	showArr(arr, size);

	sumAndMulArr(arr, size, ptrSum, ptrMul);

	cout << "Сумма элементов: " << psum << endl;
	cout << "Произведение элементов: " << pmul << endl;

	sumAndMulArr(arr, size, refSum, refMul);

	cout << "Сумма элементов: " << rsum << endl;
	cout << "Произведение элементов: " << rmul << endl;

	return 0;
}
*/

	//	Задание 2.

/*
void countOfPosNegZeroElements(int* arr, int size, int* pos, int* neg, int* zero) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			(*pos)++;
		}
		else if (arr[i] < 0) {
			(*neg)++;
		}
		else {
			(*zero)++;
		}
	}
}

void countOfPosNegZeroElements(int* arr, int size, int& pos, int& neg, int& zero) {
	for (int i = 0; i < size; i++) {
		if (arr[i] > 0) {
			pos++;
		}
		else if (arr[i] < 0) {
			neg++;
		}
		else {
			zero++;
		}
	}
}

int main() {
	setlocale(LC_ALL, "");

	int ppos = 0, pneg = 0, pzero = 0, rpos = 0, rneg = 0, rzero = 0;
	int* ptrPos = &ppos;
	int* ptrNeg = &pneg;
	int* ptrZero = &pzero;
	int& refPos = rpos;
	int& refNeg = rneg;
	int& refZero = rzero;

	int size;
	cout << "Введите размерность массива: ";
	cin >> size;
	int* arr = new int[size];

	randInitArr(arr, size);
	showArr(arr, size);

	countOfPosNegZeroElements(arr, size, ptrPos, ptrNeg, ptrZero);
	cout << "Указатели:\nКоличество положительных элементов: " << ppos << endl;
	cout << "Количество отрицательных элементов: " << pneg << endl;
	cout << "Количество нулевых элементов: " << pzero << endl;

	countOfPosNegZeroElements(arr, size, refPos, refNeg, refZero);
	cout << "Ссылки:\nКоличество положительных элементов: " << rpos << endl;
	cout << "Количество отрицательных элементов: " << rneg << endl;
	cout << "Количество нулевых элементов: " << rzero << endl;

	return 0;
}
*/

	//	Задание 3.

/*
void randInitMatrix(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			arr[i][k] = rand() % 20 - 10;
		}
	}
}

void showMatrix(int** arr, int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			cout << arr[i][k] << " ";
		}
		cout << endl;
	}
	cout << endl;
}

void mathMatrix(int** arr, int rows, int cols, double* average, int* even, int* odd) {
	cout << "Указатели: " << endl;
	int countOfElements = rows * cols;
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			*average += arr[i][k];
			if (arr[i][k] % 2 == 0) {
				(*even)++;
			}
			else {
				(*odd)++;
			}
		}
	}
	*average /= countOfElements;
}

void mathMatrix(int** arr, int rows, int cols, double& average, int& even, int& odd) {
	cout << "Ссылки: " << endl;
	int countOfElements = rows * cols;
	for (int i = 0; i < rows; i++) {
		for (int k = 0; k < cols; k++) {
			average += arr[i][k];
			if (arr[i][k] % 2 == 0) {
				even++;
			}
			else {
				odd++;
			}
		}
	}
	average /= countOfElements;
}

int main() {
	setlocale(LC_ALL, "");
	srand(time(0));

	int pEven = 0, pOdd = 0, rEven = 0, rOdd = 0;
	double pAverage = 0, rAverage = 0;
	double* ptrAverage = &pAverage;
	int* ptrEven = &pEven;
	int* ptrOdd = &pOdd;
	double& refAverage = rAverage;
	int& refEven = rEven;
	int& refOdd = rOdd;

	int rows, cols;
	cout << "Введите кол-во строк двумерного массива: ";
	cin >> rows;
	cout << "Введите кол-во столбцов двумерного массива: ";
	cin >> cols;

	int** arr = new int*[rows];
	for (int i = 0; i < rows; i++) {
		arr[i] = new int[cols];
	}

	randInitMatrix(arr, rows, cols);
	showMatrix(arr, rows, cols);

	mathMatrix(arr, rows, cols, ptrAverage, ptrEven, ptrOdd);
	cout << "Среднее арифметическое элементов: " << pAverage << endl;
	cout << "Количество четных элементов: " << pEven << endl;
	cout << "Количество нечетных элементов: " << pOdd << endl;

	mathMatrix(arr, rows, cols, refAverage, refEven, refOdd);
	cout << "Среднее арифметическое элементов: " << rAverage << endl;
	cout << "Количество четных элементов: " << rEven << endl;
	cout << "Количество нечетных элементов: " << rOdd << endl;
}
*/


void randInitArr(int* arr, int size) {
	srand(time(0));
	for (int i = 0; i < size; i++) {
		arr[i] = rand() % 20 - 10;
	}
}

void showArr(int* arr, int size) {
	cout << "Массив: ";
	for (int i = 0; i < size; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
