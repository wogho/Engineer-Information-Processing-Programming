// 20. 다음은 Java에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력 값을 작성하시오.
// 문자열 분리(split), 인덱스 접근

class Main {
    public static void main(String[] args) {
        String str = "ITISTESTSTRING";
        String[] result = str.split("T");
        System.out.print(result[3]);
    }
}
