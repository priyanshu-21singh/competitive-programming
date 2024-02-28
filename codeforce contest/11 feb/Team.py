def solve_team_problems(n,problems):
    count = 0
    for problem in problems:
        if sum(problem) >= 2:
            count += 1
    return count

def main():
    n = int(input())
    problems = [list(map(int, input().split()))
                 for _ in range(n)]

    result = solve_team_problems(n, problems)
    print(result)

if __name__ == "__main__":
    main()
