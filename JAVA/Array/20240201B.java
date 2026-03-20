// 음 Java 코드의 출력 결과를 쓰시오.
// 배열 참조 비교(==)

class Main {
    public static void check(int[] a, int[] b) {
        if (a == b)
            System.out.print("O");
        else
            System.out.print("N");
    }

    public static void main(String[] args) {
        int a[] = new int[] {1, 2, 3, 4};
        int b[] = new int[] {1, 2, 3, 4};
        int c[] = new int[] {1, 2, 3};
        check(a, b);
        check(b, c);
        check(a, c);
    }
}
