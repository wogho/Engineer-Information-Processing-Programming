// 19. 다음 소스코드가 실행할 때의 출력값을 작성하시오.
// 소수 판별, 반복문, 최대 약수 탐색

#include <stdio.h>

int isPrime(int number) {
    int i;
    for (i = 2; i < number; i++) {
        if (number % i == 0) return 0;
    }
    return 1;
}

int main(void) {
    int number = 13195, max_div = 0, i;
    for (i = 2; i < number; i++)
        if (isPrime(i) == 1 && number % i == 0) max_div = i;

    printf("%d", max_div);
    return 0;
}
