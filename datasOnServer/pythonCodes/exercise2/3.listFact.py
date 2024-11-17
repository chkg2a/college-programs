def getFact(i) -> int:
    if i < 1:
        return 1
    return i * getFact(i-1)

if __name__ == "__main__":
    n = 6
    output = [[i, getFact(i)] for i in range(n)]
    print(output)
