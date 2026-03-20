// 18. 다음은 C언어 소스 코드이다. 출력값을 쓰시오.
// 문자열 포인터 활용, 포인터 연산자 활용

#include <stdio.h>

void main(){
    char *p = "KOREA";
    printf("%s\n" , p);
    printf("%s\n" , p+3);
    printf("%c\n" , *p);
    printf("%c\n" , *(p+3));
    printf("%c\n" , *p+2);
}
