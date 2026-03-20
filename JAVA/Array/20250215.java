// 15. 다음은 Java언어의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
// 객체 배열 참조 교환, 필드 변경

public class Main {
    public static class BO {
        public int v;

        public BO(int v) {
            this.v = v;
        }
    }

    public static void main(String[] args) {
        BO a = new BO(1);
        BO b = new BO(2);
        BO c = new BO(3);
        BO[] arr = {a, b, c};
        BO t = arr[0];
        arr[0] = arr[2];
        arr[2] = t;
        arr[1].v = arr[0].v;
        System.out.println(a.v + "a" + b.v + "b" + c.v);
    }
}
