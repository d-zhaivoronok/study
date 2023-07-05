#include <stdio.h>
#include <string.h>
#include <windows.h>

// Функція для обчислення факторіалу
int factorial(int n) {
    if (n == 0)
        return 1;
    else
        return n * factorial(n - 1);
}

// Функція для розрахунку кількості анаграм
int countAnagrams(char word[]) {
    int length = strlen(word);
    int frequency[26] = {0}; // Масив для підрахунку частоти кожної букви
    int denominator = 2; // Знаменник для розрахунку добутку факторіалів

    // Розрахунок частоти кожної букви у слові
    for (int i = 0; i < length; i++) {
        frequency[word[i] - 'A']++;
    }

    // Розрахунок добутку факторіалів кількостей входжень кожної букви
    for (int i = 0; i < 26; i++) {
        if (frequency[i] > 1) {
            denominator *= factorial(frequency[i]);
        }
    }

    // Обчислення кількості анаграм
    int anagramCount = factorial(length) / denominator;

    return anagramCount;
}

int main() {

    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);

    char word[14];
    printf("Введіть слово:");
    scanf("%s", word);

    int result = countAnagrams(word);
    printf("Кількість анаграм: %d\n", result );

    return 0;
}
