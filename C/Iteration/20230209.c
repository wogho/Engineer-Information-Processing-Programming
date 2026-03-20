// 9. 다음은 C언어 문제이다. 알맞은 출력값을 작성하시오.
// 스택(push/pop), 반복문, 배열 기반 구현

#include <stdio.h>

#define MAX_SIZE 10

int isWhat[MAX_SIZE];
int point = -1;

int isEmpty(void) {
    if (point == -1) return 1;
    return 0;
}

int isFull(void) {
    if (point == 10) return 1;
    return 0;
}

void into(int num) {
    if (point >= 10)
        printf("Full");
    else
        isWhat[++point] = num;
}

int take(void) {
    if (isEmpty() == 1)
        printf("Empty");
    else
        return isWhat[point--];
    return 0;
}

int main(int argc, char const *argv[]) {
    into(5);
    into(2);

    while (!isEmpty()) {
        printf("%d", take());
        into(4);
        into(1);
        printf("%d", take());
        into(3);
        printf("%d", take());
        printf("%d", take());
        into(6);
        printf("%d", take());
        printf("%d", take());
    }

    return 0;
}
