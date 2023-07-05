// Підключення бібліотек
#include <stdio.h>
#include <windows.h>

int countNumbers(int r, int pd, int ppd) {
    if (r == 0) {
        // Досягнуто кінця розрядів, повертаємо 1, щоб позначити успішне формування числа
        return 1;
    }

    int count = 0;
    int i;

    for (i = 5; i <= 9; i += 4) {
        if (i != pd || i != ppd) {
            // Викликаємо рекурсивно для наступного розряду
            count += countNumbers(r - 1, i, pd);
        }
    }

    return count;
}

int main() {
    // Зміна кодування консолі на UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Створення змінної для кількості розрядів та отримання даних від користувача
    int r;
    printf("Введіть кількість розрядів (р ≤ 30):");
    scanf("%d", &r);

    // Викликаємо функцію для обрахунку кількості розрядів
    int result = countNumbers(r, 0, 0);

    printf("Кількість чисел із %d розрядів: %d\n", r, result);

    return 0;
}
