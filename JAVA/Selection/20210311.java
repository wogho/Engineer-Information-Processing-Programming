// 11. 다음 Java 코드에 대한 알맞는 출력값을 쓰시오.
// 조건문(if), 비트/논리 연산자(|, &, ^)

public class testco {
    public static void main(String[] args) {
        int a = 3, b = 4, c = 3, d = 5;
        if ((a == 2 | a == c) & !(c > d) & (1 == b ^ c != d)) {
            a = b + c;
            if (7 == b ^ c != a) {
                System.out.println(a);
            } else {
                System.out.println(b);
            }
        } else {
            a = c + d;
            if (7 == c ^ d != a) {
                System.out.println(a);
            } else {
                System.out.println(d);
            }
        }
    }
}
