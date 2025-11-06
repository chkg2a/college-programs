def power(i,j):
    if j < 1:
        return 1
    return i * power(i,j-1)

if __name__ == "__main__":
    base = int(input("Enter the base: "))
    exponent = int(input("Enter the exponent (>= 1): "))

    result = power(base, exponent)
    print(f"{base} raised to the power of {exponent} is: {result}")
