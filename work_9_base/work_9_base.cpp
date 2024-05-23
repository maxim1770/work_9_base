#include <iostream>

// Функция для двоичного поиска элемента в отсортированной матрице
int binarySearchInMatrix(int matrix[][3], int rows, int cols, int target) {
    int low = 0;
    int high = rows * cols - 1;

    // Пока low меньше или равен high, продолжаем поиск
    while (low <= high) {
        int mid = low + (high - low) / 2; // Вычисляем средний индекс
        int midVal = matrix[mid / cols][mid % cols]; // Получаем значение в середине

        // Если значение найдено, возвращаем индекс
        if (midVal == target) {
            return mid;
        }
        else if (midVal < target) {
            low = mid + 1; // Обновляем low для поиска во второй половине
        }
        else {
            high = mid - 1; // Обновляем high для поиска в первой половине
        }
    }

    return -1; // Элемент не найден
}


int main() {
    setlocale(LC_ALL, "Russian");
    int matrix[3][3] = { {1, 3, 5}, {7, 9, 11}, {13, 15, 17} };
    int rows = 3;
    int cols = 3;
    int target = 9;

    std::cout << "Значение:" << std::endl;
    std::cout << target << std::endl;

    std::cout << "Матрица:" << std::endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    int index = binarySearchInMatrix(matrix, rows, cols, target);

    if (index != -1) {
        std::cout << "Элемент найден в позиции: " << index << std::endl;
    }
    else {
        std::cout << "Элемент не найден." << std::endl;
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
| Ввод отсортированной |
| матрицы и искомого   |
| элемента             |
+---------------------+
          |
          V
+---------------------+
| Инициализация        |
| переменных low и high|
+---------------------+
          |
          V
+---------------------+
| Пока low <= high:    |
|   - Вычисление mid   |
|   - Получение midVal  |
|   - Сравнение midVal  |
|     с искомым элементом|
|   - Обновление low и  |
|     high              |
+---------------------+
          |
          V
+---------------------+
| Если элемент найден: |
|   - Вывод позиции     |
| Иначе:                |
|   - Вывод сообщения   |
+---------------------+
          |
          V
+---------------------+
| Конец программы      |
+---------------------+

*/
