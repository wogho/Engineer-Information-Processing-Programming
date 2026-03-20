# 9. 다음은 파이썬 소스 코드이다. 출력 결과를 쓰시오.
# 가변 배열, 중첩 리스트

lol = [[1,2,3],[4,5],[6,7,8,9]]
print(lol[0])
print(lol[2][1])
for sub in lol:
	for item in sub:
		print(item, end = '')
	print()