// 다음 C언어 코드의 출력 결과를 쓰시오.
// 문자 배열 삽입 로직, 문자 이동

#include <stdio.h>

char Data[5] = {'B', 'A', 'D', 'E'};
char c;

int main(void) {
    int i, temp, temp2;
    c = 'C';
    printf("%d\n", Data[3] - Data[1]);
    for (i = 0; i < 5; ++i) {
        if (Data[i] > c)
            break;
    }

    temp = Data[i];
    Data[i] = c;
    i++;
    for (; i < 5; ++i) {
        temp2 = Data[i];
        Data[i] = temp;
        temp = temp2;
    }
    for (i = 0; i < 5; i++) {
        printf("%c", Data[i]);
    }
    return 0;
}
