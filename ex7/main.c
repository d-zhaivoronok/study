// Підключення бібліотек
#include <stdio.h>
#include <math.h>
#include <windows.h>

int countCircle(double x1, double y1, double r1, double x2, double y2, double r2);

int main() {
    // Зміна кодування консолі на UTF-8
    SetConsoleOutputCP(65001);
    SetConsoleCP(65001);

    double x1, y1, r1, x2, y2, r2;

    // Зчитуємо вхідні дані з клавіатури
    printf("Введіть координати центрів кіл та їх радіуси:\n");
    scanf("%lf %lf %lf %lf %lf %lf", &x1, &y1, &r1, &x2, &y2, &r2);

    // Обчислюємо та виводимо результат
    int intersectionPoints = countCircle(x1, y1, r1, x2, y2, r2);
    printf("Кількість точок перетину: %d\n", intersectionPoints);

    return 0;
}

int countCircle(double x1, double y1, double r1, double x2, double y2, double r2) {
    // Обчислюємо відстань між центрами коліс
    double distance = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    // Перевіряємо, чи кола розміщені одне всередині одного
    if (distance < fabs(r1 - r2)) {
        // Кола розміщені одне всередині одного, немає точок перетину
        return 0;
    }

    // Перевіряємо, чи кола не перетинаються
    if (distance > r1 + r2) {
        // Кола не перетинаються, немає точок перетину
        return 0;
    }

    // Перевіряємо, чи кола співпадають
    if (distance == 0 && r1 == r2) {
        // Кола співпадають, безкінечно багато точок перетину
        return -1;
    }

    // Обчислюємо кількість точок перетину
    if (distance == r1 + r2 || distance == fabs(r1 - r2)) {
        // Одна точка перетину
        return 1;
    } else {
        // Дві точки перетину
        return 2;
    }
}