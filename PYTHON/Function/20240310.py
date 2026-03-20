# 10. 다음은 파이썬에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
# 타입 판별, 조건 분기 함수

def func(value):
    if type(value) == type(100):
        return 100
    elif type(value) == type(""):
        return len(value)
    else:
        return 20


a = '100.0'
b = 100.0
c = (100, 200)

print(func(a) + func(b) + func(c))
