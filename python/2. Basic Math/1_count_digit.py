import math
def digit(n):
    # cnt=0
    # while n>0:
    #     n=n//10
    #     cnt+=1
    

    # optimal approach
    cnt=int(math.log10(n)+1)
    print(cnt)
digit(7789)