// 다음 Java 코드를 보고 빈칸(밑줄)에 들어갈 키워드를 작성하세요.
// 상속, 생성자 호출(super)(빈칸 문제)

class Rectangle {
    int width, height;

    Rectangle(int width, int height) {
        this.width = width;
        this.height = height;
    }

    int getArea() {
        return width * height;
    }
}

class Square extends Rectangle {
    Square(int s) {
        _______(s, s);
    }

    int getSquareArea() {
        return width * height;
    }
}

public class Main {
    public static void main(String[] args) {
        Square sq = new Square(10);
        sq.getArea();
    }
}
