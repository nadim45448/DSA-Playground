"""
 Input Format: N = 3
Result: 
* * *
* * 
* 
"""
def pattern5(n):
    for i in range(n): #0,n,1
        for j in range(n,i,-1):
            print("*",end=" ")
        print()
        pass
    
def alternative(n):
    for i in range(n,0,-1):
        for j in range(i):
            print("*",end=" ")
        print()
    

    
n=int(input())
pattern5(n)
print()
alternative(n)