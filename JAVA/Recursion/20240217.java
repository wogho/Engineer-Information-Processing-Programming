// 17. 다음은 Java에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력 값을 작성하시오.
// 재귀 호출, 중복 문자 제거

class Main {
    public static void main(String[] args) {
        String str = "abacabcd";
        boolean[] seen = new boolean[256];
        System.out.print(calculFn(str, str.length() - 1, seen));
    }

    public static String calculFn(String str, int index, boolean[] seen) {
        if (index < 0) return "";
        char c = str.charAt(index);
        String result = calculFn(str, index - 1, seen);
        if (!seen[c]) {
            seen[c] = true;
            return c + result;
        }
        return result;
    }
}
