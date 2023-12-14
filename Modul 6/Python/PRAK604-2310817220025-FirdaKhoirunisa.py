kode1 = input()
kode2 = input()
bintang = 0
pagar = 0
dimiliki = len(kode1)
diterima = len(kode2)

if dimiliki != diterima:
    print("Panjang kalimat berbeda, pesan palsu")
else:
    for i in range(dimiliki):
        if kode1[i] == kode2[i]:
            if kode1[i] == ' ':
                print(" ", end = " ")  
            else:
                print("*", end = " ")
                bintang += 1
        else:
            print("#", end="")
            pagar += 1

    print("\n* =", bintang)
    print("# =", pagar)

    if bintang >= pagar:
        print("Pesan Asli")
    else:
        print("Pesan Palsu")