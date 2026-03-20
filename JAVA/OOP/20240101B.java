// 다음 Java 코드의 출력 결과를 쓰시오.
// 싱글톤 패턴, 객체 상태 공유

class CounterStore {
    static private CounterStore instance = null;
    private int count = 0;

    static public CounterStore get() {
        if (instance == null) {
            instance = new CounterStore();
        }
        return instance;
    }

    public void count() {
        count++;
    }

    public int getCount() {
        return count;
    }
}

public class Main {
    public static void main(String[] args) {
        CounterStore s1 = CounterStore.get();
        s1.count();
        CounterStore s2 = CounterStore.get();
        s2.count();
        CounterStore s3 = CounterStore.get();
        s3.count();
        s1.count();
        System.out.print(s1.getCount());
    }
}
