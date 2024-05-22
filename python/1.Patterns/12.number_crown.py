def pattern(n):
    space=2*(n-1)

    for i in range(1,n+1):
        # number
        for j in range(1,i+1):
            print(j,end="")
        # space
        for j in range(1,space+1):
            print(" ",end="")
        # number
        for j in range(i,0,-1):
            print(j,end="")
        print()
        space=space-2
    pass

n=int(input())
pattern(n)