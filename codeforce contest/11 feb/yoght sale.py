t = int(input())  # Read number of test cases

for _ in range(t):
    n, a, b = map(int, input().split())  # Read n, a, b for each test case
    
    # Calculate cost if buying all yogurts individually
    cost_individual = n * a
    
    # Calculate cost using the promotion
    # Number of times we can use the promotion (buying 2 yogurts for b burles)
    num_promotions = n // 2
    # Remaining yogurts if we use the promotion
    remaining_yogurts = n % 2
    
    cost_promotion = num_promotions * b + remaining_yogurts * a
    
    # Find the minimum cost between the two strategies
    min_cost = min(cost_individual, cost_promotion)
    
    # Output the minimum cost for this test case
    print(min_cost)
