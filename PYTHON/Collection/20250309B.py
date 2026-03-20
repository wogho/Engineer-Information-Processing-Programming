# 다음 Python 코드를 보고 빈칸에 들어갈 값을 작성하세요.
# 리스트 합/길이 계산, 딕셔너리 저장(빈칸 문제)
# 보기: 없음
# 예시 출력값: {0: (①, ②), 1: (③, ④), 2: (⑤, ⑥), 3: (⑦, ⑧)}

data = [
    [3, 5, 2, 4, 1],
    [4, 5, 1],
    [4, 4, 1, 5, 4],
    [4, 5]
]

result = {}

for index, lis in enumerate(data):
    list_sum = sum(lis)
    list_len = len(lis)

    result[index] = (list_sum, list_len)

print(result)
