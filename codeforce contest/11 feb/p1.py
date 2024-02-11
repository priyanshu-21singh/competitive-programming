def solve(n, m, q, a, b, queries):
    dp = [[0]*(m+1) for _ in range(n+1)]
    dp[0][0] = 1
    for i in range(1, n+1):
        dp[i][0] = dp[i-1][0] + 1
    for j in range(1, m+1):
        dp[0][j] = dp[0][j-1] + 1
    for i in range(1, n+1):
        for j in range(1, m+1):
            dp[i][j] = dp[i-1][j] + dp[i][j-1] - dp[i-1][j-1]
    for t, l, r, x in queries:
        if t == 1:
            for i in range(l-1, r):
                a[i] += x
        else:
            for j in range(l-1, r):
                b[j] += x
        for i in range(n, -1, -1):
            for j in range(m, -1, -1):
                if i > 0:
                    dp[i][j] = dp[i-1][j] + dp[i][j+1] - dp[i-1][j+1]
                else:
                    dp[i][j] = d



