t = int(input())

for _ in range(t):
    n = int(input())
    b = list(map(int, input().split()))

    if n % 2 == 0:
        print(2)
        print(f"1 {n}")
        print(f"1 {n}")
    else:
        print(4)
        print(f"1 {n}")
        print(f"2 {n}")
        print("1 2")
        print("1 2")
