#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 奇数か偶数かを判定する関数
void CheckEvenOdd(int dice, void (*callback)(int)) {
    callback(dice);  // 関数ポインタで呼び出す
}

// 結果を表示
void ResultCallback(int dice) {
    if (dice % 2 == 0) {
        printf("サイコロの目は %d で偶数です！\n", dice);
    }
    else {
        printf("サイコロの目は %d で奇数です！\n", dice);
    }
}

// 3秒間待つ関数
void WaitForSeconds(int seconds) {
    clock_t start_time = clock();  
    clock_t wait_time = seconds * CLOCKS_PER_SEC;  // 待機する時間

   
    while (clock() - start_time < wait_time) {
    
    }
}

int main(void) {
    int wages = 0;  // ユーザーの入力する変数
    int dice;   // サイコロの目

    // 乱数を初期化
    srand(time(NULL));

    // 正しい入力があるまで繰り返す
    printf("サイコロの目は奇数なら1、偶数なら2を入力して当ててください: ");
    while (scanf_s("%d", &wages) != 1 || (wages != 1 && wages != 2)) {
        printf("無効な入力です。1（奇数）または 2（偶数）を入力してください。\n");

        // 入力バッファをクリア
        while (getchar() != '\n'); //不正入力を消去する

        // 再度入力を促す
        printf("サイコロの目は奇数(1)か偶数(2)かを当ててください: ");
    }

    // サイコロを振る
    dice = rand() % 6 + 1;

    // 3秒間待つ
    printf("結果を計算中...\n");
    WaitForSeconds(3);

    // 結果を判定（
    CheckEvenOdd(dice, ResultCallback);

    // 答えが合っているかを判定
    if ((dice % 2 == 0 && wages == 2) || (dice % 2 != 0 && wages == 1)) {
        printf("正解です！\n");
    }
    else {
        printf("残念！不正解です。\n");
    }

    return 0;
}