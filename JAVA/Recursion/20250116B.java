// 다음 Java 코드의 출력 결과를 쓰시오.
// 분할 재귀, 구간 최대 누적

public class Main {
    static int fn(int[] a, int st, int end) {
        if (st >= end) return 0;
        int mid = (st + end) / 2;
        return a[mid] + Math.max(fn(a, st, mid), fn(a, mid + 1, end));
    }

    public static void main(String[] args) {
        int[] values = {3, 5, 8, 12, 17};
        System.out.println(fn(values, 0, values.length - 1));
    }
}
