# Step 1: Read input
s = input().strip()

# Step 2: Extract numbers and sort them
numbers = [int(char) for char in s if char.isdigit()]
sorted_numbers = sorted(numbers)

# Step 3: Join sorted numbers to form the new sum
new_sum = '+'.join(map(str, sorted_numbers))

# Print the result
print(new_sum)
