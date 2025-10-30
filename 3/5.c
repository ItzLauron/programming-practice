#include <stdio.h>
#include <time.h>

const double MBIT_TO_MBITE = 0.125;

int main() {
    printf("Введите скорость загрузки в мегабитах в секунду и размер файла в мегабитах:");
    float speed, weight;
    scanf("%f%f", &speed, &weight);
    printf(
        "При скорости загрузки %.2f мегабит в секунду файл размером %.2f мегабайт загружается за %.2f секунд(ы)\n",
        speed,
        weight,
        weight/(speed * MBIT_TO_MBITE)
    );
    return 0;
}