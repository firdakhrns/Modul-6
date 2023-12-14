baris, kolom = map(int, input().split())
k = list(map(int, input().split()))
matriks = []
for i in range(baris):
    row = []
    for j in range(kolom):
       row.append(k[i * kolom + j])
    matriks.append(row)
print(" ")
for i in range(baris):
    for j in range(kolom):
        print(matriks[i][j], end = " ")
    print()