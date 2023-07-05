// Підключення бібліотек
#include <stdio.h>
#include <windows.h>
#import <math.h>

int main() {

    // Зміна кодування консолі на UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Отримання даних координат від користувача
    int x1, x2, y1, y2;
    printf("Введіть координати вектора ( х1, у1, х2, у2 ):");
    scanf("%i %i %i %i", &x1, &y1, &x2, &y2);


    // Обчислення та виведення результату
    printf("%.6lf", sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2)));

    return 0;
}
