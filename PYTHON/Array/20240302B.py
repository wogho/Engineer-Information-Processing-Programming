# 다음은 파이썬 코드이다. 출력 결과를 쓰시오.
# 리스트 양끝 교환, 슬라이싱 합 연산

def func(x):
    for i in range(len(x) // 2):
        x[i], x[-i - 1] = x[-i - 1], x[i]

x = [1, 2, 3, 4, 5, 6]
func(x)
print(sum(x[::2]) - sum(x[1::2]))
