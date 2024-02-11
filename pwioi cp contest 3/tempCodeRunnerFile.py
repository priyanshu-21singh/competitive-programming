
    while period < n:
        num_periods = (x + period - 1) // period
        for k in range(2, n + 1):
            if k * (num_periods - 1) + k - 1 >= n:
                break
            if k * (num_periods - 1) + k - 1 == x:
                count += 1
        period += 2
    return count

t = int(input())
for _ in range(t):
    n, x = map(int, input().split())
    print(count_k(n, x))