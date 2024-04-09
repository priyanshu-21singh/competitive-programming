t = int(input())  # Read number of test cases

for _ in range(t):
    n, c, d = map(int, input().split())  # Read n, c, d
    elements = list(map(int, input().split()))  # Read the sequence of n*n elements
    
    # Initialize the n x n matrix to store the elements
    matrix = [[0] * n for _ in range(n)]
    
    # Fill the matrix with the given sequence of elements
    idx = 0
    for i in range(n):
        for j in range(n):
            matrix[i][j] = elements[idx]
            idx += 1
    
    # Check if the matrix elements form a valid progressive square
    possible = True
    for i in range(n):
        for j in range(n):
            if i < n - 1:
                if matrix[i+1][j] != matrix[i][j] + c:
                    possible = False
                    break
            if j < n - 1:
                if matrix[i][j+1] != matrix[i][j] + d:
                    possible = False
                    break
        if not possible:
            break
    
    # Output the result for this test case
    if possible:
        print("YES")
    else:
        print("NO")
