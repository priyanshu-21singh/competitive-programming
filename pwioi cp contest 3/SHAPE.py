t = int(input())  

for _ in range(t):
    n = int(input())  
    grid = [input().strip() for _ in range(n)]  
    
    # Check for a square
    is_square = True
    for i in range(n):
        for j in range(n):
            if grid[i][j] == '1' and (j == 0 or grid[i][j - 1] == '0'):
                
                for k in range(j + 1, n):
                    if grid[i][k] == '0':
                        break
                else:
                    
                    break
                is_square = False
    
    # Check for a triangle
    is_triangle = True
    for i in range(1, n):
        if '1' in grid[i][:i] or '1' in grid[i][i + 1:]:
            is_triangle = False
            break
    
    # Output the result
    if is_square:
        print("SQUARE")
    else:
        print("TRIANGLE")
