def armstrong(n):
    l=len(str(n))
    copy=n
    sum=0
    while n>0:
        ld=n%10
        sum=sum+pow(ld,l)
        n=n//10
    return sum==copy

a=armstrong(153) 
if(a):
    print("armstrong")
else:
    print("no")