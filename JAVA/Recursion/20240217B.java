// 다음 Java 코드의 출력 결과를 쓰시오.
// 재귀 호출, 중복 문자 제거

class Main {
    public static String fn(String str, int index, boolean[] seen) {
        if (index < 0) return "";
        char c = str.charAt(index);
        String result = fn(str, index - 1, seen);
        if (!seen[c]) {
            seen[c] = true;
            return c + result;
        }
        return result;
    }

    public static void main(String[] args) {
        String str = "abacabcd";
        int length = str.length();
        boolean[] seen = new boolean[256];
        System.out.print(fn(str, length - 1, seen));
    }
}
