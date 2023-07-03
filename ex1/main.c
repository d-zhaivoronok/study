// Підключення стандартних бібліотек

#include <stdio.h>
#include <windows.h>

int main() {

    // Налаштування консолі на кодування UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    // Оголошення змінних
    int t1, t2, t3;

    // Отримання значень змінних від користувача
    printf("Введіть три значення:\n");
    scanf("%d %d %d", &t1, &t2, &t3);

    // Обчислюється час необхідний для з'їдання пирога
    double total_time = 1.0 / t1 + 1.0 / t2 + 1.0 / t3;
    double cake_time = 1.0 / total_time;

    // Виведення результату на екран
    printf("Час, необхідний для з'їдання пирога: ");
    printf("%.2f\n", cake_time);

    return 0;
}
