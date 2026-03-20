# 6. 다음은 Python에 대한 문제이다. 아래 코드를 읽고 알맞는 출력 값을 작성하시오.
# 문자열 슬라이싱 비교, 패턴 개수 카운트

def fnCalculation(x, y):
    result = 0
    for i in range(len(x)):
        temp = x[i:i + len(y)]
        if temp == y:
            result += 1
    return result


a = "abdcabcabca"
p1 = "ab"
p2 = "ca"

out = f"ab{fnCalculation(a, p1)}ca{fnCalculation(a, p2)}"
print(out)
