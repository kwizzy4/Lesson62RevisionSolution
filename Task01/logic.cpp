// Task 01 [The arithmetic mean of non-zero elements]
// Среднее арифметическое ненулевых элементов
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо спроектировать эффективный алгоритм и разработать функцию, 
// которая вычисляет среднее арифметическое ненулевых элементов матрицы. 
// Не забудьте про механизм "защиты от дурака".

#include "logic.h"

double calculate_arithmetical_mean_of_nonzero_elements(int** matrix, int n, int m) {
	if(matrix == nullptr || n <= 0 || m <= 0){
		return -1.0;
	}

	double sum = 0.0;
	int count = 0;

	for (int i = 0; i < n; i++) {
		if (matrix[i] == nullptr) {
			return -1.0;
		}
		int* row = matrix[i];
		int* end = row + m;

		for (int* ptr = row; ptr < end; ptr++) {
			if (*ptr != 0) {
				sum += *ptr;
				count++;
			}
		}
	}
	if (count == 0) {
		return 0.0;
	}
	return sum / count;
}