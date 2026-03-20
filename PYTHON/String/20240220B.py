# 다음은 파이썬 코드이다. 출력 결과를 쓰시오.
# 문자열 split, 인덱스 반환

def fn(text, k):
    s = text.split('T')
    return s[k]

text = "ITISTESTSTRING"
k = 3
result = fn(text, k)
print(result)
