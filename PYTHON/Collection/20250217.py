# 17. 다음은 Pyhon언어의 문제이다. 아래 코드를 보고 알맞는 출력값을 작성하시오.
# 딕셔너리 컴프리헨션, 집합 교집합

lst = [1, 2, 3]
dst = {i: i * 2 for i in lst}
s = set(dst.values())
lst[0] = 99
dst[2] = 7
s.add(99)
print(len(s & set(dst.values())))
