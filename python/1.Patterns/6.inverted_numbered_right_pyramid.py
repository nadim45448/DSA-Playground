""" 
Input Format: N = 3
Result: 
1 2 3
1 2
1
 """

def pattern6(n):
    for i in range(n): # 0 to n
        for j in range(n,i,-1): # n elements 
            print(n-j+1,end=" ")
        print()
        
n=int(input())
pattern6(n)
