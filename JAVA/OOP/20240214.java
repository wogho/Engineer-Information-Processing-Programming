// 14. 다음은 Java 언어에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
// 인터페이스 구현, 조건 합산

class Main {
    public static void main(String[] args) {
        int a[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
        ODDNumber OE = new ODDNumber();
        System.out.print(OE.sum(a, true) + ", " + OE.sum(a, false));
    }
}

interface Number {
    int sum(int[] a, boolean odd);
}

class ODDNumber implements Number {
    public int sum(int[] a, boolean odd) {
        int result = 0;
        for (int i = 0; i < a.length; i++) {
            if ((odd && a[i] % 2 != 0) || (!odd && a[i] % 2 == 0))
                result += a[i];
        }
        return result;
    }
}
