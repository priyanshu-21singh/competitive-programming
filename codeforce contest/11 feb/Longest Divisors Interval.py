for _ in range(int(input())):
    n=int(input())
    ans=0
    c=0
    for i in range(1,100):
        if n%i==0:
            a=True
            c+=1
        else:
            ans=max(ans,c)
            c=0 
    print(ans)