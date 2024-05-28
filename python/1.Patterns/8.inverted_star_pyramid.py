
def pattern8(n):

    for i in range(n):
        # space
        for j in range(i):
            print(" ",end="")
        # star
        for j in range((2*n)-(2*i+1)):
            print("*",end="")
         # space
        for j in range(i):
            print(" ",end="")
        print()
    pass

pattern8(5)
