ruang = int(input())
zetsu = list(map(int, input().split()))
for i in range(ruang):
    zetsu[i] *= (i + 1)
print(zetsu)