try:
    while True:
        tamanho = int(input())
        matriz = [[0 for x in range(tamanho)] for x in range(tamanho)]

        for x in range(tamanho):
            matriz[x][x] = 2
            matriz[x][tamanho-x-1] = 3
            for y in range(tamanho):
                if(x >= (tamanho/3)-1 and x <= (2*tamanho/3) and y >= (tamanho/3)-1 and y <= (2*tamanho/3)):
                    matriz[x][y] = 1
            matriz[(tamanho//2)][tamanho//2] = 4

        for x in range(tamanho):
            for y in range(tamanho):
                print(matriz[x][y], end='')
            print()
        print()
except EOFError:
    pass
