// 3. 다음 자바 문법에 알맞는 출력 결과를 작성하시오.
// 클래스 객체 전달, 메소드 호출에 의한 멤버 변경

class A {
    int a;
    int b;
}

public class Main {
    static void func1(A m) {
        m.a *= 10;
    }

    static void func2(A m) {
        m.a += m.b;
    }

    public static void main(String[] args) {
        A m = new A();

        m.a = 100;
        func1(m);
        m.b = m.a;
        func2(m);

        System.out.printf("%d", m.a);
    }
}
