try:
    while True:
        texto = input()
        count = 0
        for x in texto:
            if(x is not " "):
                if(count%2 == 0):
                    print(x.upper(), end='')
                else:
                    print(x.lower(), end='')
                count+=1
            else:
                print(" ", end='')
        print()
except EOFError:
    pass
