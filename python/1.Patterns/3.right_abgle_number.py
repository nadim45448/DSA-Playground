""" 
Input Format: N = 3
Result: 
1
1 2 
1 2 3
 """
def pattern3(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(j,end=" ")
        print()
        pass
""" 
Input Format: N = 3
Result: 
1
2 2 
3 3 3 
"""
def pattern4(n):
    for i in range(1,n+1):
        for j in range(1,i+1):
            print(i,end=" ")
        print()
        pass
n=int(input())
pattern3(n)
print()
pattern4(n)