def pattern10(n):
    for i in range(1,2*n,1):
        star=i
        if star >n:
            star=2*n-i
        for j in range(1,star+1,1):
            print("*",end="")
        print()

pattern10(5)
