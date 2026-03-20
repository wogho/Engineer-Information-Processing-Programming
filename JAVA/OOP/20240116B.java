// 다음 Java 코드의 출력 결과를 쓰시오.
// 상속, 생성자 호출, 메소드 오버라이딩

class A {
    int a, b;

    public A(int a, int b) {
        this.a = a;
        this.b = b;
    }
}

class B extends A {
    int c = 3;

    public B(int i) {
        super(i, i + 1);
    }

    public void print() {
        System.out.println(c * c);
    }
}

public class Main {
    public static void main(String[] args) {
        B a = new B(10);
        a.print();
    }
}
