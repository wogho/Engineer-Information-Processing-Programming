// 다음 Java 코드의 실행 결과를 작성하세요.
// enum values/name 인덱스 접근

enum Tri {
    AB("A"), A("AB"), C("ABC");

    private String code;

    Tri(String code) {
        this.code = code;
    }

    public String code() {
        return code;
    }
}

class Main {
    public static void main(String[] args) {
        Tri t = Tri.values()[Tri.A.name().length()];
        System.out.print(t.code());
    }
}
