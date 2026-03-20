// 14. 다음 코드에서 괄호안에 알맞는 값을 변수명으로 작성하시오.
// 버블 정렬, 배열 인덱스(빈칸 문제)

public class Sort {
    public static void swap(int[] arr, int idx1, int idx2) {
        int temp = arr[idx1];
        arr[idx1] = arr[idx2];
        arr[( 1 )] = temp;
    }

    public static void Usort(int[] array, int length) {
        for (int i = 0; i < length; i++) {
            for (int j = 0; j < length - i - 1; j++) {
                if (array[j] > array[j + 1]) {
                    swap(array, j, j + 1);
                }
            }
        }
    }

    public static void main(String[] args) {
        int[] item = new int[] {5, 3, 8, 1, 2, 7};
        int nx = 6;
        Usort(item, ( 2 ));

        for (int data : item) {
            System.out.print(data + " ");
        }
    }
}
