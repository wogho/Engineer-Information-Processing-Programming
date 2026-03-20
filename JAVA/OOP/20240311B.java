// 다음 Java 코드의 출력 결과를 쓰시오.
// 상속, 필드 숨김, 메소드 오버라이딩

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

class Main {
    public static void main(String[] args) {
        Base b = new Derivate();
        Derivate d = new Derivate();
        System.out.print(b.getX() + b.x + d.getX() + d.x);
    }
}
