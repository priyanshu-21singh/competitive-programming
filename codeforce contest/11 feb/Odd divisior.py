def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        if n % 2 == 1:
            print("YES")
        else:
            ok = False
            div = n
            while div > 2:
                div //= 2
                if div % 2 == 1:
                    if n % div == 0:
                        ok = True
                        break
            if ok:
                print("YES")
            else:
                print("NO")

if __name__ == "__main__":
    main()