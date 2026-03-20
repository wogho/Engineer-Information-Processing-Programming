// 19. 다음은 자바 코드이다. 출력 결과를 쓰시오.
// 상속, 생성자 호출, super 키워드

class A {
    private int a;

    public A(int a) {
        this.a = a;
    }

    public void display() {
        System.out.println("a=" + a);
    }
}

class B extends A {
    public B(int a) {
        super(a);
        super.display();
    }
}

public class good {
    public static void main(String[] args) {
        B obj = new B(10);
    }
}
