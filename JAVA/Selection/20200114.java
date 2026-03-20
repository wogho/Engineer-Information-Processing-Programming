// 14. 다음은 자바 소스코드이다. 출력 결과를 쓰시오.
// 선택문(switch), break 생략에 따른 fall-through

public class good {
    public static void main(String[] args) {
        int i = 3;
        int k = 1;

        switch (i) {
            case 0:
            case 1:
            case 2:
            case 3:
                k = 0;
            case 4:
                k += 3;
            case 5:
                k -= 10;
            default:
                k--;
        }

        System.out.print(k);
    }
}
