import math
def checkPrime(n):
    cnt=0
    sqrtN=int(math.sqrt(n))
    for i in range(1,sqrtN+1):
        if n%i==0:
            cnt+=1
            if i!=n//i:
                cnt+=1
    if cnt==2:
        return True
    else:
        return False
    

    n = 1483
    isPrime = checkPrime(n)
    if isPrime:
        print(n, "is a prime number.")
    else:
        print(n, "is not a prime number.")

