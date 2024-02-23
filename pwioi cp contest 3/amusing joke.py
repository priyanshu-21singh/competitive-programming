# Reading input
guest_name = input().strip()
host_name = input().strip()
pile_of_letters = input().strip()

# Concatenate guest_name and host_name to create the expected combined string
expected_combined_string = guest_name + host_name

# Check if the sorted characters of the expected_combined_string match the sorted characters of pile_of_letters
if sorted(expected_combined_string) == sorted(pile_of_letters):
    print("YES")
else:
    print("NO")
