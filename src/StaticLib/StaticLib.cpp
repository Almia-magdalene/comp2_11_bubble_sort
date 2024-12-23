#define WIN32_LEAN_AND_MEAN             // Windows ヘッダーからほとんど使用されていない部分を除外する
#include "Windows.h"                    // Windows API の機能定義

#include "../include/lib_func.h"

// バブルソート(引数が不適切であればfalseを返す)
bool bubble_sort(item* begin, const item* end)
{
    // 引数が不適切な場合は false を返す
    if (begin == nullptr || end == nullptr || begin >= end) {
        return false;
    }

    size_t length = end - begin; // 配列の長さを計算
    for (size_t i = 0; i < length - 1; i++) {
        for (size_t j = 0; j < length - 1 - i; j++) {
            // item の比較 (key のみを比較する例)
            if (begin[j].key > begin[j + 1].key) {
                // スワップ
                item temp = begin[j];
                begin[j] = begin[j + 1];
                begin[j + 1] = temp;
            }
        }
    }

    return true;
}
