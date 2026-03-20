// 다음 Java 코드의 출력 결과를 쓰시오.
// 상속, 오버라이딩, static 메소드 숨김

public class Main {
    public static class Parent {
        public int x(int i) { return i + 2; }
        public static String id() { return "P"; }
    }

    public static class Child extends Parent {
        public int x(int i) { return i + 3; }
        public String x(String s) { return s + "R"; }
        public static String id() { return "C"; }
    }

    public static void main(String[] args) {
        Parent ref = new Child();
        System.out.println(ref.x(2) + ref.id());
    }
}
