n = int(input())

MatriksA = []
MatriksB = []

print("Matriks A")
for i in range(n):
    angka1 = list(map(int, input().split()))
    MatriksA.append(angka1)

print("Matriks B")
for i in range(n):
    angka2 = list(map(int, input().split()))
    MatriksB.append(angka2)

print("Matriks AXB")
for i in range(n):
    for j in range(n):
        hasil = 0
        for k in range(n):
            hasil += MatriksA[i][k] * MatriksB[k][j]
        print(hasil, end=" ")
    print()