// 다음 Java 코드 출력값을 작성하세요.
// 참조 전달, 배열 요소 변경

public class Main {
    public static void change(String[] data, String s) {
        data[0] = s;
        s = "Z";
    }

    public static void main(String[] args) {
        String data[] = {"A"};
        String s = "B";

        change(data, s);
        System.out.print(data[0] + s);
    }
}
