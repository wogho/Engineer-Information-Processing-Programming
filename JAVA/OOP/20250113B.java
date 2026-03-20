// 다음 Java 코드의 출력 결과를 쓰시오.
// 상속, 생성자 호출 중 오버라이딩 메소드 실행

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

class Main {
    public static void main(String[] args) {
        new Child();
        System.out.println(Parent.total);
    }
}
