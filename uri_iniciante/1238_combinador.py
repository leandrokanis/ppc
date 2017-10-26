for x in range(int(input())):
    a, b = input().split()
    for i in range(max(len(a), len(b))):
        try:
            print(a[i], end='')
        except IndexError:
            pass
        try:
            print(b[i], end='')
        except IndexError:
            pass
    print()
