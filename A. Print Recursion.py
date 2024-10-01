def rec(n):
    if n==0:
        return
    print('I love Recursion')
    rec(n-1)

n=int(input())
rec(n)