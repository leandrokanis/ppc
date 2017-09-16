from decimal import Decimal
num = Decimal(input())
if num>=0:
    sinal = "+"
else:
    sinal = ""
print(sinal + str('%.4E' % num))
print()
