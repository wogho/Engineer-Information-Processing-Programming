// 다음은 이진수를 십진수로 변환하는 C언어 코드이다. (a), (b)에 적합한 코드를 작성하시오.
// 진수 변환, 반복문(빈칸 문제)

#include <stdio.h>

int main(void) {
    int input = 101110;
    int di = 1;
    int sum = 0;

    while (1) {
        if (input == 0) break;
        else {
            sum = sum + (input (a) (b)) * di;
            di = di * 2;
            input = input / 10;
        }
    }
    printf("%d", sum);
    return 0;
}
