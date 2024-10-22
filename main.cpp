#include "stdio.h"
#include "Windows.h"
#include "stdlib.h"
#include <time.h>
#include <functional>

void ShowResult(bool isCorrect) {
    if (isCorrect) {
        printf("正解\n");
    } else {
        printf("不正解\n");
    }
}

void setTimeout(int second, const std::function<void()>& func) {
    Sleep(second * 1000);
    func();
}

int main() {
    srand((unsigned int)time(NULL));

    int guess;
    printf("奇数と偶数どっち？（1: 奇数, 2: 偶数）: ");

    if (scanf_s("%d", &guess) != 1 || (guess != 1 && guess != 2)) {
        printf("1か2を入力\n");
        return 1;
    }

    auto p = [guess]() {
        int dice = rand() % 6 + 1;
        printf("結果: %d\n", dice);

        bool isCorrect = (dice % 2 == 1 && guess == 1) || (dice % 2 == 0 && guess == 2);
        ShowResult(isCorrect);
        };

    setTimeout(3, p);

    return 0;
}
