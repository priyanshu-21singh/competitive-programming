
def min_total_cost(N, X):
    # Calculate the minimum number of subscriptions needed.
    subscriptions = (N + 5) // 6

    # Calculate the total cost.
    total_cost = subscriptions * X

    return total_cost
# Function to handle each test case.
def solve_test_case():
    # Input for each test case
    N, X = map(int, input().split())

    # Calculate and print the result for the current test case
    result = min_total_cost(N, X)
    print(result)

# Input the number of test cases
T = int(input())

# Loop through each test case
for _ in range(T):
    solve_test_case()
