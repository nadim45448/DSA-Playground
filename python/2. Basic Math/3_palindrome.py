def palindrome(n):
    dup=n
    revNum=0
    while n>0:
        ld=n%10
        revNum=(10*revNum)+ld
        n=n//10
    if dup==revNum:
        return True
    else:
        return False
def main():
    number=121
    if palindrome(number):
        print(number, " is a palindrome")
    else:
        print(number, " is not a palindrome")

if __name__ =="__main__":
    main()
