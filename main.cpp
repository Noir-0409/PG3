//#include "stdio.h"
//#include "Windows.h"
//#include "stdlib.h"
//#include <time.h>
//
//typedef void (*PFunc)(int*);
//
//void DispResult(int* s) {
//
//	int dice = rand() % 6 + 1;
//	printf("結果: %d\n", dice);
//
//}
//
//void ShowResult(bool isCorrect) {
//	
//	if (isCorrect) {
//
//		printf("正解\n");
//
//	} else {
//
//		printf("不正解\n");
//
//	}
//
//}
//
//void setTimeout(PFunc p, int second) {
//
//	Sleep(second * 1000);
//
//	p(&second);
//
//}
//
//int main() {
//
//	int guess = 0;
//
//	srand((unsigned int)time(NULL));
//
//	printf("奇数と偶数どっち？（1: 奇数, 2: 偶数）:\n");
//
//	scanf_s("%d",&guess);
//
//	PFunc p;
//
//	p = DispResult;
//
//	setTimeout(p, 3);
//
//return 0;
//
//}

#include "stdio.h"
#include "Windows.h"
#include "stdlib.h"
#include <time.h>

typedef void (*PFunc)(int*, int);

void ShowResult(bool isCorrect) {
    if (isCorrect) {
        printf("正解\n");
    } else {
        printf("不正解\n");
    }
}

void DispResult(int* s, int userGuess) {
    int dice = rand() % 6 + 1; 
    printf("結果: %d\n", dice);

    bool isCorrect = (dice % 2 == 1 && userGuess == 1) || (dice % 2 == 0 && userGuess == 2);
    ShowResult(isCorrect);
}

void setTimeout(PFunc p, int second, int userGuess) {
    Sleep(second * 1000); 
    p(&second, userGuess);
}

int main() {
    srand((unsigned int)time(NULL));

    int guess;
    printf("奇数と偶数どっち？（1: 奇数, 2: 偶数）: ");

    if (scanf_s("%d", &guess) != 1 || (guess != 1 && guess != 2)) {
        printf("1か2を入力\n");
        return 1; 
    }

   
    PFunc p = DispResult;


    setTimeout(p, 3, guess);

    return 0;
}
