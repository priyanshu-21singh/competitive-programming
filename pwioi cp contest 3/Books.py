def max_books(n, t, books):
    left = 0
    right = 0
    max_books_count = 0
    current_time = 0

    while right < n:
        current_time += books[right]

        while current_time > t:
            current_time -= books[left]
            left += 1
 max_books_count = max(max_books_count, right - left + 1)
        right += 1

    return max_books_count


n, t = map(int, input().split())
books = list(map(int, input().split()))

# Output the result
result = max_books(n, t, books)
print(result)
