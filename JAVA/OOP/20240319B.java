// 다음 Java 코드의 출력 결과를 쓰시오.
// 제네릭, 오버로딩 해석

class Printer {
    void print(Integer x) {
        System.out.print("A" + x);
    }

    void print(Object x) {
        System.out.print("B" + x);
    }

    void print(Number x) {
        System.out.print("C" + x);
    }
}

class Collection<T> {
    T value;

    public Collection(T t) {
        value = t;
    }

    public void print() {
        new Printer().print(value);
    }
}

class Main {
    public static void main(String[] args) {
        new Collection<Integer>(0).print();
    }
}
