// 19. 다음 자바 코드에 대한 출력 값을 작성하시오.
// 배열 반환 메소드, 배열 순회

public class Main {
    static int[] MakeArray() {
        int[] tempArr = new int[4];

        for (int i = 0; i < tempArr.length; i++) {
            tempArr[i] = i;
        }

        return tempArr;
    }

    public static void main(String[] args) {
        int[] intArr;
        intArr = MakeArray();

        for (int i = 0; i < intArr.length; i++)
            System.out.print(intArr[i]);
    }
}
