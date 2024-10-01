def rec(n,start=1):
    if start==n+1:
        return
    
    print(start)
    return rec(n,start+1)

n=int(input())
rec(n)