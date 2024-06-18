t = int(input())

for _ in range(t):
    n, m = map(int, input().split())
    a = input()
    b = input()
    
    ans = 0
    i = 0



    
    for j in range(len(b)):
        if b[j] == a[i]:
            ans += 1
            i += 1
        if i == n:
            break
    
    print(ans)
