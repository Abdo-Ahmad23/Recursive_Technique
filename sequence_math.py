def seqMath(n:int):
    if n==1:
        return 1
    print(n)
    if n%2:
        return seqMath(3*n+1)
    else:
        return seqMath(n//2)

print(seqMath(5))

