def main():
    test_cases = int(input())

    for _ in range(test_cases):
        size = int(input())
        sequence = list(map(int, input().split()))

        sequence.sort()
        median_value = 0

        count_duplicates = 0
        if size % 2 == 0:
            median_value = sequence[(size // 2) - 1]
            if sequence[size // 2] == median_value:
                count_duplicates += 1
                for j in range(size // 2, size):
                    if sequence[j] != median_value:
                        break
                    else:
                        count_duplicates += 1
        elif size % 2 != 0:
            median_value = sequence[size // 2]
            if sequence[(size // 2) + 1] == median_value:
                count_duplicates += 1
                for j in range((size // 2) + 1, size):
                    if sequence[j] != median_value:
                        break
                    else:
                        count_duplicates += 1

        if count_duplicates != 0:
            print(count_duplicates)
        else:
            print(1)

if __name__ == "__main__":
    main()
