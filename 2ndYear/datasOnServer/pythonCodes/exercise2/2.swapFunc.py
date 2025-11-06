def swap(i,j,l) -> None:
    i -= 1
    j -= 1
    temp = l[i]
    l[i] = l[j]
    l[j] = temp

if __name__ == "__main__":
    pos1: int = 1
    pos2: int = 3
    master_list = [23,65,19,90]
    print(master_list)
    swap(pos1, pos2, master_list)
    print(master_list)
