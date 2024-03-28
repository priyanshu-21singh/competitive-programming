def determine_pattern(a, b, c):
    if a < b < c:
        return "STAIR"
    elif a < b > c:
        return "PEAK"
    else:
        return "NONE"

# Input number of test cases
t = int(input())

# Iterate through each test case
for _ in range(t):
    # Input the digits
    a, b, c = map(int, input().split())
    
    # Determine the pattern and print the result
    print(determine_pattern(a, b, c))
