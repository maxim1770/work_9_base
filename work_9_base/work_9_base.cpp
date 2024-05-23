#include <iostream>
#include <array>

const int ROWS = 3;
const int COLS = 3;

bool searchInMatrix(int matrix[ROWS][COLS], int target) {
    int row = 0;
    int col = COLS - 1;

    while (row < ROWS && col >= 0) {
        if (matrix[row][col] == target) {
            return true;
        }
        else if (matrix[row][col] > target) {
            col--;
        }
        else {
            row++;
        }
    }

    return false;
}

int main() {
    setlocale(LC_ALL, "Russian");
    int matrix[ROWS][COLS] = { {1, 3, 5}, {7, 9, 11}, {13, 15, 17} };
    int target = 9;


    std::cout << "Значение:" << std::endl;
    std::cout << target << std::endl;

    std::cout << "Матрица:" << std::endl;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }


    if (searchInMatrix(matrix, target)) {
        std::cout << "Значение найдено в матрице" << std::endl;
    }
    else {
        std::cout << "Значение не найдено в матрице" << std::endl;
    }

    return 0;
}

/*
+---------------------+
| Начало программы    |
+---------------------+
          |
          V
+---------------------+
| Инициализация       |
| переменных          |
+---------------------+
          |
          V
+---------------------+
| Установка начальных  |
| значений row и col   |
+---------------------+
          |
          V
+---------------------+
| Пока row < ROWS и    |
| col >= 0             |
+---------------------+
          |
          V
+---------------------+
| Если matrix[row][col]|
| равно target,       |
| вернуть true        |
+---------------------+
          |
          V
+---------------------+
| Если matrix[row][col]|
| больше target,      |
| уменьшить col       |
+---------------------+
          |
          V
+---------------------+
| Иначе                |
| увеличить row        |
+---------------------+
          |
          V
+---------------------+
| Вернуть false       |
+---------------------+
          |
          V
+---------------------+
| Конец программы      |
+---------------------+
*/
