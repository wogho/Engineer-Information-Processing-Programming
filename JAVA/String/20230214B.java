// 다음 Java 소스코드의 출력 결과를 쓰시오.
// 문자열 비교(==, equals)

class Main {
    public static void main(String[] args) {
        String str1 = "gamja";
        String str2 = "gamja";
        String str3 = new String("gamja");

        System.out.println(str1 == str2);
        System.out.println(str1 == str3);
        System.out.println(str1.equals(str3));
        System.out.println(str2.equals(str3));
    }
}
