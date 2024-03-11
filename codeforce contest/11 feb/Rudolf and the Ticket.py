
t = int(input())

for _ in range(t):
    r, l, max_limit = map(int, input().split())
    arr_right = list(map(int, input().split()))
    arr_left = list(map(int, input().split()))

    count = 0
    for j in range(r):
        for k in range(l):
            if (arr_right[j] + arr_left[k]) <= max_limit:
                count += 1

    print(count)

