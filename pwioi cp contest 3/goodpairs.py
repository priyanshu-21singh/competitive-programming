t = int(input())

for _ in range(t):
    n = int(input())
    a = list(map(int, input().split()))

    
    min_index = 0
    max_index = 0
    for i in range(n):
        if a[i] < a[min_index]:
            min_index = i
        if a[i] >= a[max_index]:
            max_index = i

    
    
    print(min_index+1, max_index+1,"\n")  
