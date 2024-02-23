def min_operations_to_move_chips(n, chips):
    last_chip_position = -1
    operations = 0

    for i, chip in enumerate(chips):
        if chip == 1:
            if last_chip_position != -1:
                operations += i - last_chip_position - 1
            last_chip_position = i

    return operations

def main():
    t = int(input())
    for _ in range(t):
        n = int(input())
        chips = list(map(int, input().split()))
        result = min_operations_to_move_chips(n, chips)
        print(result)

if __name__ == "__main__":
    main()
