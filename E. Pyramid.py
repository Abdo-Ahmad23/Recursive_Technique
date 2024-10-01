def rec(n:int, start = 1):
    if start == n+1:
        return;
    res = ' ' * (n-start) + '*' * (start * 2 - 1)
    print(res)

    rec(n,start+1)
n = int(input())

rec(n);



