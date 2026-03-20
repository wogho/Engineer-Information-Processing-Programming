// 13. 다음은 Java 코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 상속, 생성자 호출 중 오버라이딩 메소드 실행

public class Main {
    public static void main(String[] args) {
        new Child();
        System.out.println(Parent.total);
    }
}

class Parent {
    static int total = 0;
    int v = 1;

    public Parent() {
        total += (++v);
        show();
    }

    public void show() {
        total += total;
    }
}

class Child extends Parent {
    int v = 10;

    public Child() {
        v += 2;
        total += v++;
        show();
    }

    @Override
    public void show() {
        total += total * 2;
    }
}
