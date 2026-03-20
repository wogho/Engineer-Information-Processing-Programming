// 17. 다음은 자바 코드이다. 출력 결과를 쓰시오.
// 반복문(while), continue, 조건 누적 합

public class good {
    public static void main(String[] args) {
        int i = 0;
        int sum = 0;

        while (i < 10) {
            i++;
            if (i % 2 == 1)
                continue;
            sum += i;
        }

        System.out.println(sum);
    }
}
