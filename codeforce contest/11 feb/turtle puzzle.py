def max_sum_after_operations(t, test_cases):
    results = []

    for n, arr in test_cases:
        
        sum_negated = sum(map(abs, arr))

        
        max_sum = current_sum = 0

        for num in arr:
            current_sum = max(num, current_sum + num)
            max_sum = max(max_sum, current_sum)

        
        result = max(sum_negated, max_sum)
        results.append(result)

    return results

# Input reading
t = int(input())
test_cases = [(int(input()), list(map(int, input().split()))) for _ in range(t)]


results = max_sum_after_operations(t, test_cases)

# Output results
for result in results:
    print(result)
