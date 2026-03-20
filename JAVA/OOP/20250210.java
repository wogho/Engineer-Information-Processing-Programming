// 10. 다음은 Java언어의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
// 상속, 오버라이딩, static 메소드 숨김

public class Main {
    public static class Parent {
        public int x(int i) {
            return i + 2;
        }

        public static String id() {
            return "P";
        }
    }

    public static class Child extends Parent {
        public int x(int i) {
            return i + 3;
        }

        public String x(String s) {
            return s + "R";
        }

        public static String id() {
            return "C";
        }
    }

    public static void main(String[] args) {
        Parent ref = new Child();
        System.out.println(ref.x(2) + ref.id());
    }
}
