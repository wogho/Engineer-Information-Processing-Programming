// 11. 다음은 Java 코드에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 상속, 필드 숨김, 메소드 오버라이딩

public class Main {
    public static void main(String[] args) {
        Base a = new Derivate();
        Derivate b = new Derivate();

        System.out.print(a.getX() + a.x + b.getX() + b.x);
    }
}

class Base {
    int x = 3;

    int getX() {
        return x * 2;
    }
}

class Derivate extends Base {
    int x = 7;

    int getX() {
        return x * 3;
    }
}
