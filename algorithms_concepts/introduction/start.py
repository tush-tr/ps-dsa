# find the greatest common denominator 
# Using Euclid Algorithm
def gcd(a,b):
    while(b!=0):
        t = a 
        a = b
        b = t % b
    return a 
# try out the function with few examples
print(gcd(20,8))
