// 14. 다음은 자바에 대한 문제이다. 알맞은 출력값을 작성하시오.
// 문자열 비교(==, equals), 참조/값 비교

public class Main {
    public static void main(String[] args) {
        String str1 = "Programming";
        String str2 = "Programming";
        String str3 = new String("Programming");

        System.out.println(str1 == str2);
        System.out.println(str1 == str3);
        System.out.println(str1.equals(str3));
        System.out.print(str2.equals(str3));
    }
}
