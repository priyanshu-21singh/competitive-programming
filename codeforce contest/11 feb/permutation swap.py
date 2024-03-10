import math

def solve():
    n = int(input())
    v = list(map(int, input().split()))

    for i in range(n):
        v[i] -= 1

    ds = [abs(v[i] - i) for i in range(n) if abs(v[i] - i) != 0]

    ans = ds[0] if ds else 1

    for x in ds:
        ans = math.gcd(ans, x)

    print(ans)

def main():
    testCase = int(input())
    for _ in range(testCase):
        solve()

if __name__ == "__main__":
    main()
