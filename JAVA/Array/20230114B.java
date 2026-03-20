// 다음 Java 코드의 빈칸에 들어갈 코드를 쓰시오. (단, 변수명으로 쓰시오.)
// 버블 정렬, 배열 인덱스(빈칸 문제)

class SortProblem {
    static void swap(int[] a, int idx1, int idx2) {
        int t = a[idx1];
        a[idx1] = a[idx2];
        a[(1)] = t;
    }

    static void Usort(int[] a, int len) {
        for (int i = 0; i < len; i++) {
            for (int j = 0; j < len - i - 1; j++) {
                if (a[j] > a[j + 1]) {
                    swap(a, j, j + 1);
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] item = {5, 4, 9, 1, 3, 7};
        int nx = 6;
        Usort(item, (2));
        for (int data : item) {
            System.out.print(data + "");
        }
    }
}
