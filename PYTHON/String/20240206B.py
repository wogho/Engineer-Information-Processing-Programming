# 다음은 파이썬 코드이다. 출력 결과를 쓰시오.
# 문자열 슬라이싱 비교, 부분 문자열 카운트

def fn(x, y):
    result = 0
    for i in range(len(x)):
        s = x[i:i + len(y)]
        if s == y:
            result += 1
    return result

str = "abdcabcabca"
p1 = "ca"
p2 = "ab"
print(f'ab{fn(str, p1)}' f'ca{fn(str, p2)}')
