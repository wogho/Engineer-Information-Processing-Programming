// 8. 다음 소스코드에 대한 출력값을 작성하시오.
// 객체 배열, 반복문 초기화

class A {
    int n;
    int g;
}

public class good {
    public static void main(String[] args) {
        A[] a = new A[2];

        for (int i = 0; i < 2; i++) {
            a[i] = new A();
            a[i].n = i;
            a[i].g = i + 1;
        }

        System.out.printf("%d", a[0].n + a[1].g);
    }
}
