// 12. 다음은 Java의 상속과 생성자 호출에 관한 코드이다. 밑줄에 알맞은 단어를 작성하시오.
// 상속, 생성자 호출(super)(빈칸 문제)

class Rectangle {
    int width, height;

    Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }
}

class Square extends Rectangle {
    Square(int a) {
        ____(a, a);
    }

    int getSquareArea() {
        return width * height;
    }
}

public class Main {
    public static void main(String[] args) {
        Square sq = new Square(10);
        System.out.println(sq.getSquareArea());
    }
}
