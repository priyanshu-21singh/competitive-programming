def ncr(n, r, m):
    # initialize numerator and denominator
    num = den = 1
    for i in range(r):
        num = (num * (n - i)) % m
        den = (den * (i + 1)) % m
    return (num * pow(den, m - 2, m)) % m
 
# p must be a prime greater than n
n, r, m = 10, 2, 13
print("Value of nCr % m is", ncr(n, r, m))