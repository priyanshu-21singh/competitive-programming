def solve():
    n = int(input())
    num = n
    cnt = 0
    while num != 1:
        if num % 6 == 0:
            num //= 6
            cnt += 1
        elif num % 3 == 0:
            num *= 2
            cnt += 1
        else:
            cnt = -1
            break
    print(cnt)

def main():
    t = int(input())
    for _ in range(t):
        solve()

if __name__ == "__main__":
    main()
