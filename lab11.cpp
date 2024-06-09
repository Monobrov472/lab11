#include <iostream>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

int secondsPassedSinceLastHour(int totalSeconds) {
    int secondsInHour = 3600; // 1 година = 3600 секунд
    int secondsPassed = totalSeconds % secondsInHour;
    return secondsPassed;
}

int main() {
    int N;
    std::cout << "Enter the number of seconds that have passed since the start of the day: ";
    std::cin >> N;

    // Перетворення секунд у години, хвилини та секунди
    int hours = N / 3600;
    int remainingSeconds = N % 3600;
    int minutes = remainingSeconds / 60;
    int seconds = remainingSeconds % 60;

    std::cout << "hours: " << hours << ", minutes: " << minutes << ", seconds: " << seconds << std::endl;

    // Обчислення кількості секунд, що пройшли з початку останньої години
    int secondsLastHour = secondsPassedSinceLastHour(N);
    std::cout << "Seconds that have passed since the beginning of the last hour: " << secondsLastHour << std::endl;

    return 0;
}
