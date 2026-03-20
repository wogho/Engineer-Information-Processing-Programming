// 다음 Java 코드의 프로그램 동작 순서를 (1)~(7)의 번호로 쓰시오.
// 상속, 생성자 호출 순서, 동적 바인딩

class Parent {
    int x, y;
    Parent(int x, int y) { // (1)
        this.x = x;
        this.y = y;
    }
    int getA() { // (2)
        return x * y;
    }
}

class Child extends Parent {
    int x;
    Child(int x) { // (3)
        super(x + 1, x);
    }
    int getA(int n) { // (4)
        return x + x;
    }
}

public class Main {
    public static void main(String[] args) { // (5)
        Parent parent = new Child(3); // (6)
        System.out.println(parent.getA()); // (7)
    }
}
