def build_string(n):
    if n == 1:
        return 'A'
    elif n == 2:
        return 'AB'
    else:
        # Constructing the string based on the pattern
        result = 'A' + ''.join(chr(ord('A') + i) + chr(ord('A') + i) for i in range((n - 1) // 2))
        if n % 2 == 0:
            return result
        else:
            return result + 'A'

def main():
    t = int(input())  # Number of test cases
    for _ in range(t):
        n = int(input())  # Length of the string
        if n == 1:
            print("YES")
            print("A")
        elif n == 2:
            print("YES")
            print("AB")
        elif n == 3:
            print("YES")
            print("ABB")
        else:
            result = build_string(n)
            print("YES")
            print(result)

if __name__ == "__main__":
    main()
