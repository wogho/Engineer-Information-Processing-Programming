# 12. 다음 파이썬 코드에 대한 알맞는 출력 값을 작성하시오.
# 문자열 리스트 순회, 인덱스 접근

a = ["Seoul", "Kyeonggi", "Incheon", "Daejun", "Daegu", "Pusan"]
str = "S"

for i in a:
    str = str + i[1]

print(str)
