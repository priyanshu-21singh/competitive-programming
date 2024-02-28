t = int(input())

for _ in range(t):
    sum_val, div1, div2 = 0, 0, 0
    n = int(input())
    arr = list(map(int, input().split()))

    for num in arr:
        sum_val += num
        if num % 3 == 1:
            div1 += 1
        if num % 3 == 2:
            div2 += 1

    if sum_val % 3 == 0:
        print("0")
    elif sum_val % 3 == 1:
        if div1 > 0 or (div1 % 3 == 0 and div2 % 3 == 0):
            print("1")
        else:
            print("2")
    else:
        if div2 > 0 or (div2 % 3 == 0 and div1 % 3 == 2):
            print("1")
        else:
            print("2")
