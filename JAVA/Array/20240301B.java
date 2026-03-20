// 다음 Java 코드의 출력 결과를 쓰시오.
// 문자열 배열 equals 비교

class Main {
    static void func(String[] sM, int size) {
        for (int i = 1; i < size; i++) {
            if (sM[i - 1].equals(sM[i])) {
                System.out.print("O");
            } else {
                System.out.print("N");
            }
        }
        for (String m : sM) {
            System.out.print(m);
        }
    }

    public static void main(String[] args) {
        String[] sM = new String[3];
        sM[0] = "A";
        sM[1] = "A";
        sM[2] = new String("A");
        func(sM, 3);
    }
}
