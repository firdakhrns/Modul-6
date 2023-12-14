angka1, angka2 = map(int, input().split())
matriks1 = []
matriks2 = []

if angka1 != angka2:
    print("Angka tidak sama")
else:
    baris1 = list(map(int, input().split()))
    baris2 = list(map(int, input().split()))
    for i in range(angka1):
        matriks1.append(baris1[i])
    for i in range(angka2):
        matriks2.append(baris2[i])
    
    for i in range(angka1):
        print(matriks1[i] * matriks2[i], end=" ")