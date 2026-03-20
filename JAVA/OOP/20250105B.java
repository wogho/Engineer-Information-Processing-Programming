// 다음 Java 코드의 출력 결과를 쓰시오.
// 예외 처리(try-catch-finally), ArithmeticException

public class Main {
    public static void main(String[] args) {
        int a = 5, b = 0;
        try {
            System.out.print(a / b);
        } catch (ArithmeticException e) {
            System.out.print("출력1");
        } catch (ArrayIndexOutOfBoundsException e) {
            System.out.print("출력2");
        } catch (NumberFormatException e) {
            System.out.print("출력3");
        } catch (Exception e) {
            System.out.print("출력4");
        } finally {
            System.out.print("출력5");
        }
    }
}
