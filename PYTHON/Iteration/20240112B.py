# 다음은 파이썬 코드이다. 출력 결과를 쓰시오.
# 문자열 리스트 순회, 인덱스 접근

a = ["Seoul", "Kyeonggi", "Incheon", "Daejeon", "Daegu", "Pusan"]
str01 = "S"
for i in a:
    str01 = str01 + i[1]
print(str01)
