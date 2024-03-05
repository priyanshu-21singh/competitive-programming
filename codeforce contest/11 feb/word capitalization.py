word = input().strip()

# Capitalize the first letter
if word:
    capitalized_word = word[0].upper() + word[1:]
else:
    capitalized_word = word

print(capitalized_word)
