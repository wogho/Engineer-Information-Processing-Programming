// 9. 다음은 Java언어의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
// 람다식, 예외 처리, 함수형 인터페이스

public class Main {
    static interface F {
        int apply(int x) throws Exception;
    }

    public static int run(F f) {
        try {
            return f.apply(3);
        } catch (Exception e) {
            return 7;
        }
    }

    public static void main(String[] args) {
        F f = (x) -> {
            if (x > 2) {
                throw new Exception();
            }
            return x * 2;
        };

        System.out.print(run(f) + run((int n) -> n + 9));
    }
}
