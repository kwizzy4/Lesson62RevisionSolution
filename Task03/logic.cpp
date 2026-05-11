// Количество строк с большим количество положительных элементов
// [The Number of rows with a large number of positive elements]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать функцию(или программу), которая находит
// количество строк, в которых положительных элементов больше 
// чем всех остальных (отрицательных и нулевых).

#include "logic.h"

int count_rows_with_more_positive_values(int** matrix, int n, int m) {
	if (matrix == nullptr || n <= 0 || m <= 0) {
		return 0;
	}
	
	int result = 0;

	for (int i = 0; i < n; i++) {
		if (matrix[i] == nullptr) {
			return -1;
		}

		int positive_count = 0;
		int other_count = 0;

		int* row = matrix[i];
		int* end = row + m;

		for (int* ptr = row; ptr < end; ptr++) {
			if (*ptr > 0) {
				positive_count++;
			}
			else {
				other_count++;
			}
		}
		if (positive_count > other_count) {
			result++;
		}
	}
	return result;
}