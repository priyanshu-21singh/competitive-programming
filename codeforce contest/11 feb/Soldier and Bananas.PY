k, n, w = map(int, input().split())

# Calculate the total cost of w bananas
total_cost = k * (w * (w + 1) // 2)

# Calculate the amount to borrow (if needed)
borrow_amount = max(0, total_cost - n)

print(borrow_amount)
