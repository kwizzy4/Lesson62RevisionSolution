// Последний локальный минимум
// [The last local minimum]
// 
// Дана математическая прямоугольная матрица размером N на M.
// Необходимо разработать эффективную функцию (или программу), которая 
// находит и возвращает местоположение последнего локального минимума. 

#include "logic.h"

void get_last_local_minimum(int** matrix, int n, int m, int* ii, int* jj) {
	*ii = 0;
	*jj = 0;

	if (matrix == nullptr || n <= 0 || m <= 0 || ii == nullptr || jj == nullptr) {
		return;
	}
	for (int i = 0; i < n; i++) {
		if (matrix[i] == nullptr) {
			*ii = 0;
			*jj = 0;
			return;
		}
	}
	int last_i = -1;
	int last_j = -1;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			int current = matrix[i][j];
			bool is_local_min = true;

			if (i < n - 1 && matrix[i + 1][j] <= current) {
				is_local_min = false;
			}
			if (i < n - 1 && matrix[i + 1][j] <= current) {
				is_local_min = false;
			}
			if (j > 0 && matrix[i][j - 1] <= current) {
				is_local_min = false;
			}
			if (j < m - 1 && matrix[i][j + 1] <= current) {
				is_local_min = false;
			}
			if (is_local_min) {
				last_i = i;
				last_j = j;
			}
		}
	}
	if (last_i != -1 && last_j != -1) {
		*ii = last_i + 1;
		*jj = last_j + 1;
	}
	else {
		*ii = 0;
		*jj = 0;
	}
}