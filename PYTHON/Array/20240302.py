# 2. 다음은 파이썬에 대한 문제이다. 아래 코드를 확인하여 알맞는 출력값을 작성하시오.
# 리스트 양끝 교환, 슬라이싱 합 연산

def func(lst):
    for i in range(len(lst) // 2):
        lst[i], lst[-i - 1] = lst[-i - 1], lst[i]

lst = [1, 2, 3, 4, 5, 6]
func(lst)
print(sum(lst[::2]) - sum(lst[1::2]))
