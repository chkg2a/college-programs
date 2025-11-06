class VolumeDemo {
  static int volume(int side) {
    return side * side * side;
  }

  static int volume(int length, int width, int height) {
    return length * width * height;
  }

  public static void main(String[] args) {
    double cubeVolume = volume(5);
    System.out.println("Volume of Cube: " + cubeVolume);

    double cuboidVolume = volume(4, 3, 2);
    System.out.println("Volume of Cuboid: " + cuboidVolume);
  }
}
