import math
def divisors(n):
    div=[]
    sqrtN=int(math.sqrt(n))
    for i in range(1,sqrtN+1):
        if n%i==0:
            div.append(i)
            if i!=n//i:
                div.append(n//i)
    return div
number=36
div=divisors(number)

print(div,end=" ")
