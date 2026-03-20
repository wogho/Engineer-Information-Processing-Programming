// 15. 다음 중, 괄호 ( ) 안에 들어갈 연산자를 써서 정수를 역순으로 출력하는 알맞는 답을 작성하시오.
// 반복문, 정수 연산(비교/나머지/나눗셈)

#include <stdio.h>

int main(void) {
    int number = 1234;
    int div = 10;
    int result = 0;

    while (number ( 1 ) 0) {
        result = result * div;
        result = result + number ( 2 ) div;
        number = number ( 3 ) div;
    }

    printf("%d", result);
    return 0;
}
