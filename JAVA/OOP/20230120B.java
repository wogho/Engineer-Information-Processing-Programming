// 다음 Java 코드의 출력 결과를 쓰시오.
// 상속, 생성자 체이닝, 필드와 메소드 접근

class Parent {
    int x = 100;

    Parent() {
        this(500);
    }

    Parent(int x) {
        this.x = x;
    }

    int getX() {
        return x;
    }
}

class Child extends Parent {
    int x = 4000;

    Child() {
        this(5000);
    }

    Child(int x) {
        this.x = x;
    }
}

public class Main {
    public static void main(String[] args) {
        Child obj = new Child();
        System.out.println(obj.getX());
    }
}
