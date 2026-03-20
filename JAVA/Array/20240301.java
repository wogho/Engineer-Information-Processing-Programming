// 1. 다음은 Java 코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 문자열 배열, equals 비교, 반복문 출력

public class Main {
    static String[] s = new String[3];

    static void func(String[] s, int size) {
        for (int i = 1; i < size; i++) {
            if (s[i - 1].equals(s[i])) {
                System.out.print("O");
            } else {
                System.out.print("N");
            }
        }
        for (String m : s) {
            System.out.print(m);
        }
    }

    public static void main(String[] args) {
        s[0] = "A";
        s[1] = "A";
        s[2] = new String("A");

        func(s, 3);
    }
}
