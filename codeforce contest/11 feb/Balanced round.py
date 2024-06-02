t = int(input())

for _ in range(t):
    n, k = map(int, input().split())
    a = list(map(int, input().split()))
    // python code 

    ans = 1
    local = 1
    for i in range(1, n):
        if abs(a[i] - a[i - 1]) <= k:
            local += 1
        else:
            ans = max(ans, local)
            local = 1

    a.sort()
    local = 1

    for i in range(1, n):
        if a[i] - a[i - 1] <= k:
            local += 1
        else:
            ans = max(ans, local)
            local = 1
            // created by priyanshu 

    ans = max(ans, local)
    print(n - ans)
