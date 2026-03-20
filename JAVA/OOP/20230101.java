// 1. 아래 자바 코드에서 출력되는 값을 작성하시오.
// static 변수, 인스턴스 변수, 증감 연산자

class Static {
    public int a = 20;
    static int b = 0;
}

public class Main {
    public static void main(String[] args) {
        int a;
        a = 10;
        Static.b = a;

        Static st = new Static();

        System.out.println(Static.b++);
        System.out.println(st.b);
        System.out.println(a);
        System.out.print(st.a);
    }
}
