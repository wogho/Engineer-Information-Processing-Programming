// 17. 다음 C언어에 대한 알맞는 출력값을 쓰시오.
// 구조체 배열, 구조체 포인터, 멤버 연산

#include <stdio.h>

struct jsu {
    char name[12];
    int os, db, hab, hhab;
};

int main(void) {
    struct jsu st[3] = {{"데이터1", 95, 88},
                        {"데이터2", 84, 91},
                        {"데이터3", 86, 75}};
    struct jsu *p;

    p = &st[0];

    (p + 1)->hab = (p + 1)->os + (p + 2)->db;
    (p + 1)->hhab = (p + 1)->hab + p->os + p->db;

    printf("%d\n", (p + 1)->hab + (p + 1)->hhab);
    return 0;
}
