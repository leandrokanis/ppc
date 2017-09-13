notas = [100, 50, 20, 10, 5, 2]
moedas = [1, 0.50, 0.25, 0.10, 0.05, 0.01]
trocado_n = {nota: 0 for nota in notas}
trocado_m = {nota: 0 for nota in moedas}

valor = float(input())
for x in notas:
    while valor >= x:
        valor -= x
        trocado_n[x] += 1

valor_centavos = round(valor%2, 2)
for x in moedas:
    while valor_centavos >= x:
        trocado_m[x] += 1
        valor_centavos = round(round(valor_centavos, 2) - round(x, 2), 2)

print("NOTAS:")
for x in notas:
    print(str(trocado_n[x]) + " nota(s) de R$ " + str("%.2f" % x))

print("MOEDAS:")
for x in moedas:
    print(str(trocado_m[x]) + " moeda(s) de R$ " + str("%.2f" % x))
