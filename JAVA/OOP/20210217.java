// 17. 클래스 내에서 객체 생성 없이 사용할 수 있는 메소드로써 출력 결과를 작성하시오.
// static 메소드, 삼항 연산자

public class Test {
    public static void main(String[] args) {
        system.out.print(Test.check(1));
    }

    (    ) String check(int num) {
        return (num >= 0) ? "positive" : "negative";
    }
}
