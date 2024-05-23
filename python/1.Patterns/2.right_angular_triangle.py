""" Input Format: N = 3
Result: 
* 
* * 
* * *
 """
def patttern2(n):
    for i in range(n):
        for j in range(i+1):
            print("* ",end="")
        print()
    

    
n=int(input())
patttern2(n)