# 5. 다음은 파이썬 코드이다. 출력 결과를 쓰시오.
# 문자열/리스트 순회, 인덱싱

class good:
    li = ["seoul", "kyeonggi", "inchon", "daejeon", "daegu", "pusan"]

g = good()
str01 = ''
for i in g.li:
    str01 = str01 + i[0]

print(str01)
