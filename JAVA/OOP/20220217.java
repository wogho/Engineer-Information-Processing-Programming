// 17. 다음 자바코드에서 알맞는 출력값을 작성하시오.
// 클래스/객체, 멤버 변수, 반복문 메소드

class Conv {
    int a;

    public Conv(int a) {
        this.a = a;
    }

    int func() {
        int b = 1;
        for (int i = 1; i < a; i++) {
            b = a * i + b;
        }
        return a + b;
    }
}

public class good {
    public static void main(String[] args) {
        Conv obj = new Conv(3);
        obj.a = 5;
        int b = obj.func();
        System.out.print(obj.a + b);
    }
}
