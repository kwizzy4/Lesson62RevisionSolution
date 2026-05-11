// Сумма элементов [The sum of elements]
// 
// Дана математическая квадратная матрица размером N.
// Необходимо разработать функцию (или программу), 
// которая вычисляет сумму элементов матрицы, 
// расположенных на главной и побочной диагоналях.
#include "logic.h"

int sum_main_and_second_diagonales_elements(int** matrix, int n) {
	if (matrix == nullptr || n <= 0) {
		return -1;
	}
	int sum = 0;

	for (int i = 0; i < n; i++) {
		if (matrix[i] == nullptr) {
			return -1;
		}
		sum += matrix[i][j];

		if (i != n - 1 - i) {
			sum += matrix[i][n - 1 - i];
		}
	}
	return sum;
}