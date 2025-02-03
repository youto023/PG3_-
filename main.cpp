#include <iostream>
#include <thread>
#include <chrono>
#include <stdio.h>
#include <string>

int main() {


    std::string a(1000000, 'a');
    std::string aCopy;
    std::string aMove;

    // 開始時刻を取得
    auto startCopy = std::chrono::high_resolution_clock::now();


    aCopy = a;


    // 終了時刻を取得
    auto endCopy = std::chrono::high_resolution_clock::now();

    // 経過時間をマイクロ秒単位で計算
    auto durationCopy = std::chrono::duration_cast<std::chrono::microseconds>(endCopy - startCopy);

    // 結果を表示
    std::cout << "コピー時間: " << durationCopy.count() << " μs\n";

    return 0;
}