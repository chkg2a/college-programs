def power(i,j):
    if j < 1:
        return 1
    return i * power(i,j-1)

if __name__ == "__main__":
    print(power(3,4))
