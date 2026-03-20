# 다음은 파이썬 코드이다. 출력 결과를 쓰시오.
# 타입 비교, 조건 분기 함수

def func(value):
    if type(value) == type(100):
        return 100
    elif type(value) == type(""):
        return len(value)
    else:
        return 20


a = "100.0"
b = 100.0
c = (100, 200)

print(func(a) + func(b) + func(c))
