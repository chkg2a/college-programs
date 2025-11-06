import math

def hypotenuse(i, j):
    return math.sqrt(math.pow(i,2)+math.pow(j,2))

if __name__ == "__main__":
    side1 = float(input("Enter the length of the first side: "))
    side2 = float(input("Enter the length of the second side: "))

    hypotenuse_length = hypotenuse(side1, side2)
    print(f"The length of the hypotenuse is: {hypotenuse_length}")
