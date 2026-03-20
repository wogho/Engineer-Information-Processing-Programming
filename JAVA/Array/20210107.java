// 7. 다음 Java 프로그램 결과를 쓰시오.
// 2차원 가변 배열(jagged array), 배열 길이(length)

public class good {
    public static void main(String[] args) {
        int[][] arr = new int[][]{{45, 50, 75}, {89}};
        System.out.println(arr[0].length);
        System.out.println(arr[1].length);
        System.out.println(arr[0][0]);
        System.out.println(arr[0][1]);
        System.out.println(arr[1][0]);
    }
}
