def count_distinct_k(t, test_cases):
    results = []

    for _ in range(t):
        a, b, l = test_cases[_]

        distinct_k = set()

        for x in range(101):  # 
            for y in range(101):
                k_candidate = l // (a**x * b**y)
                if k_candidate * a**x * b**y == l:
                    distinct_k.add(k_candidate)

        results.append(len(distinct_k))

    return results

# Input reading
t = int(input())
test_cases = [tuple(map(int, input().split())) for _ in range(t)]


results = count_distinct_k(t, test_cases)

# Output results
for result in results:
    print(result)
