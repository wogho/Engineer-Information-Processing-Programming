// 10. 아래 JAVA언어 코드의 실행 순서를 중복 번호없이 작성하시오.
// 상속, 생성자 호출 순서, 동적 바인딩

class Parent {
    int x, y;

    Parent(int x, int y) { // ①
        this.x = x;
        this.y = y;
    }

    int getT() { // ②
        return x * y;
    }
}

class Child extends Parent {
    int x;

    Child(int x) { // ③
        super(x + 1, x);
        this.x = x;
    }

    int getT(int n) { // ④
        return super.getT() + n;
    }
}

class Main {
    public static void main(String[] args) { // ⑤
        Parent parent = new Child(3); // ⑥
        System.out.println(parent.getT()); // ⑦
    }
}
