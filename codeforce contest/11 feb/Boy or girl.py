# Read input
user_name = input().strip()

# Determine the number of distinct characters
distinct_characters = set(user_name)

# Check if the number of distinct characters is odd
if len(distinct_characters) % 2 == 1:
    print("IGNORE HIM!")
else:
    print("CHAT WITH HER!")

          
