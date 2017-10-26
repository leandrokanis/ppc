def make_math(n, operacao, operador):
    if(operacao=="ADICIONAR"):
        result = n + operador
    elif(operacao=="SUBTRAIR"):
        result = n - operador
    elif(operacao=="MULTIPLICAR"):
        result = n * operador
    elif(operacao=="DIVIDIR"):
        result = n / (operador*1.0)
    return result

n=input()

dic = {}
try:
    while True:
        raw_answer = raw_input()
        answers = raw_answer.split(' ')
        operacao, operador = answers
        dic[operacao] = int(operador)
except ValueError:
    pass

falhou = 0
for i in range(1,100):
    for op in dic:
        i = make_math(i, op, dic[op])
    if(i < 0 or i%1):
        falhou = falhou + 1

print(falhou)
