def small(a):
    if len(a) == 1:
        return "YES"
    for i in range(1, len(a)):
        if a[i] - a[i - 1] > 1:
            return "NO"
    return "YES"
def main():
    a = int(input())
    for _ in range(a):
        n = int(input())
        a = list(map(int, input().split()))
        a.sort()
        print(small(a))

main()

        
