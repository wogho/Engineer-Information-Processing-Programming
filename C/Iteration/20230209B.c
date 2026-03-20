// 다음 C 프로그램의 출력 결과를 쓰시오.
// 스택(push/pop), 반복문 순회

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
    if (point >= 10) printf("Full");
    isWhat[++point] = num;
}

int take(void) {
    if (isEmpty() == 1) printf("Empty");
    return isWhat[point--];
}

int main(void) {
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
