// 다음 C언어 코드의 출력 결과를 쓰시오.
// 구조체 배열, 비트 AND 마스킹

#include <stdio.h>

typedef struct student {
    char *name;
    int score[3];
} Student;

int dec(int enc) {
    return enc & 0xA5;
}

int sum(Student *p) {
    return dec(p->score[0]) + dec(p->score[1]) + dec(p->score[2]);
}

int main(void) {
    Student s[2] = {{"Kim", {0xA0, 0xA5, 0xDB}}, {"Lee", {0xA0, 0xED, 0x81}}};
    int result = 0, i;
    for (i = 0; i < 2; i++) {
        result += sum(&s[i]);
    }
    printf("%d", result);
    return 0;
}
