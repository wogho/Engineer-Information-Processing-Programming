// 15. 다음은 C언어 프로그램이다. 실행 결과를 쓰시오.
// 구조체 배열, 구조체 포인터 이동

#include <stdio.h>

struct good {
    char name[10];
    int age;
};

int main(void) {
    struct good s[] = {"Kim", 28, "Lee", 38, "Seo", 50, "Park", 35};

    struct good *p;
    p = s;
    p++;

    printf("%s\n", p->name);
    printf("%d\n", p->age);

    return 0;
}
