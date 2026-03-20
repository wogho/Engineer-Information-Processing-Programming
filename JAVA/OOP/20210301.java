// 1. 다음 Java 코드에 대한 알맞는 출력값을 쓰시오.
// 싱글톤 패턴, static 필드, 객체 상태 공유

class Connection {
    private static Connection _inst = null;
    private int count = 0;

    static public Connection get() {
        if (_inst == null) {
            _inst = new Connection();
            return _inst;
        }
        return _inst;
    }

    public void count() {
        count++;
    }

    public int getCount() {
        return count;
    }
}

public class testcon {
    public static void main(String[] args) {
        Connection conn1 = Connection.get();
        conn1.count();
        Connection conn2 = Connection.get();
        conn2.count();
        Connection conn3 = Connection.get();
        conn3.count();

        System.out.print(conn1.getCount());
    }
}
