// 20. 다음 자바 코드에 대한 출력 값을 작성하시오.
// 반복문, 조건문, 배수 판별

public class Exam {
    public static void main(String[] args) {
        int a = 0;
        for (int i = 1; i < 999; i++) {
            if (i % 3 == 0 && i % 2 != 0)
                a = i;
        }
        System.out.print(a);
    }
}
