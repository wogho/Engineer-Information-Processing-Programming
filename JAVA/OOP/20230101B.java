// 다음 Java 코드의 출력 결과를 쓰시오.
// static 변수, 인스턴스 변수, 후위 증감 연산

class StaticData {
    public int a = 20;
    static int b = 0;
}

public class Main {
    public static void main(String[] args) {
        int a;
        a = 10;
        StaticData.b = a;
        StaticData st = new StaticData();
        System.out.println(StaticData.b++);
        System.out.println(st.b);
        System.out.println(a);
        System.out.print(st.a);
    }
}
