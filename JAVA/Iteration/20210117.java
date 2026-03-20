// 17. 다음은 Java 프로그램이다. 실행 결과를 쓰시오.
// 반복문(for), 누적 합 출력 형식

public class good {
    public static void main(String[] args) {
        int i, j;
        for (j = 0, i = 0; i <= 5; i++) {
            j += i;
            System.out.print(i);
            if (i == 5) {
                System.out.print("=");
                System.out.print(j);
            } else {
                System.out.print("+");
            }
        }
    }
}
