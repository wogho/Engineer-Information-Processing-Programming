// 18. 다음은 Java 코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 예외 처리(try-catch-finally), NullPointerException

public class ExceptionHandling {
    public static void main(String[] args) {
        int sum = 0;
        try {
            func();
        } catch (NullPointerException e) {
            sum = sum + 1;
        } catch (Exception e) {
            sum = sum + 10;
        } finally {
            sum = sum + 100;
        }
        System.out.print(sum);
    }

    static void func() throws Exception {
        throw new NullPointerException();
    }
}
