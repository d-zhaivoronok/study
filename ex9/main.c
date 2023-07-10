// Підключення бібліотек
#include <stdio.h>
#include <windows.h>

int minSteps(int x, int y) {
    if (x == y) {
        return 0; // Випадок, коли початкове та кінцеве значення співпадають
    } else if (y - x == 1 || y - x == -1) {
        return 1; // Випадок, коли початкове та кінцеве значення відрізняються на 1
    } else if (y - x == 2 || y - x == -2) {
        return 2; // Випадок, коли початкове та кінцеве значення відрізняються на 2
    }

    // Загальний випадок
    int stepCount = 0;
    while (x != y) {
        if (y - x >= 2) {
            x += 2;
        } else {
            x++;
        }
        stepCount++;
    }
    return stepCount;
}

int main() {

    // Зміна кодування консолі на UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    int x, y;
    printf("Введіть значення x: ");
    scanf("%d", &x);
    printf("Введіть значення y: ");
    scanf("%d", &y);

    if (x >= 0 && y >= 0 && y < 2147483648) {
        int steps = minSteps(x, y);
        printf("Мінімальна кількість кроків: %d\n", steps + 1);
    } else {
        printf("Неправильні вхідні дані!\n");
    }

    return 0;
}
