// 8. 아래 코드는 Machine 이라는 인터페이스를 정의하고 WashingMachine 클래스에서 해당 인터페이스를 사용하고자 한다. 빈칸에 들어갈 올바른 키워드를 작성하시오.
// 인터페이스 구현(빈칸 문제)

interface Machine {
    void run();
}

class WashingMachine (____빈칸____) Machine {
    private String name;

    public WashingMachine() {
        this.name = "LG Washer";
    }

    public void run() {
        System.out.println("Washing machine running");
    }
}

public class Main {
    public static void main(String[] args) {
        WashingMachine wm = new WashingMachine();
        wm.run();
    }
}
