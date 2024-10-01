class BuildTriangle():
    def Down(n:int,space:int=0):
        if n ==0:
            return
        
        print((space)*' '+ '* '*n)

        return BuildTriangle.Down(n-1,space+1)
    
    def Up(n:int,start:int=0,space:int=0):
        if start==n+1:
            return
        
        print((n-space)*' '+ '* '*start)

        return BuildTriangle.Up(n,start+1,space+1)

BuildTriangle.Up(5)
BuildTriangle.Down(5)

