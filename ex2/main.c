// Підключення бібліотек
#include <stdio.h>
#include <windows.h>


// Знаходження найбільшого спільного дільника
int nsd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return nsd(b, a % b); // Використання рекурсії для пошуку нсд
}

// Знаходження найменшого спільного кратного
int nsc(int a, int b) {
    return (a * b) / nsd(a, b);
}


// Головна функція програми
int main() {

    // Зміна стандарту кодування консолі на UTF-8
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    // Отримання та запис змінної кількості чисел
    int n;
    scanf("%d", &n);


    // Перевірка входження числа до діапазону умови
    if (!(2 <= n && n <= 20)){
        printf("Число не входить до діапазону умови");
        return 0;
    }


    // Створення масиу чисел записаних через пробіл
    int numbers[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }

    // Пошук найменшого спільного кратного
    int nsc_result = numbers[0];
    for (int i = 1; i < n; i++) {
        nsc_result = nsc(nsc_result, numbers[i]);
    }


    // Вивід результату на екран
    printf("Найменше спільне кратне: %d\n", nsc_result);

    return 0;
}
