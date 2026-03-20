// 16. 다음 Java 코드를 보고 알맞는 출력 값을 작성하시오.
// 상속, 메소드 오버라이딩, 다형성

class classOne {
    int a, b;

    public classOne(int a, int b) {
        this.a = a;
        this.b = b;
    }

    public void print() {
        System.out.println(a + b);
    }
}

class classTwo extends classOne {
    int po = 3;

    public classTwo(int i) {
        super(i, i + 1);
    }

    public void print() {
        System.out.println(po * po);
    }
}

public class main {
    public static void main(String[] args) {
        classOne one = new classTwo(10);
        one.print();
    }
}
