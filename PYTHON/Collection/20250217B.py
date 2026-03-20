# 다음 Python 코드를 보고 빈칸에 들어갈 값을 작성하세요.
# 딕셔너리 컴프리헨션, 집합 교집합

lst = [1, 2, 3]
dst = {i: i * 2 for i in lst}
s = set(dst.values())
lst[0] = 99
dst[2] = 7
s.add(99)
print(len(s & set(dst.values())))
