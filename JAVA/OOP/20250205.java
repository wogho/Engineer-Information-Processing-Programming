// 5. 다음은 Java의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
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
