// 다음 Java 코드의 출력 결과를 쓰시오.
// 메소드 오버로딩, 재귀 함수

public class Main {
    public static void main(String[] args) {
        System.out.println(calc("5"));
    }

    static int calc(int value) {
        if (value <= 1) return value;
        return calc(value - 1) + calc(value - 2);
    }

    static int calc(String str) {
        int value = Integer.valueOf(str);
        if (value <= 1) return value;
        return calc(value - 1) + calc(value - 3);
    }
}
