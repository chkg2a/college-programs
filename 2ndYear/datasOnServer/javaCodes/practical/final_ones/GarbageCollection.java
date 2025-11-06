class GarbageCollection {
  public void finalize() throws Throwable{
    System.out.println("Garbage Collector is working");
  }
  public static void main(String[] args) {
    GarbageCollection obj1 = new GarbageCollection();
    GarbageCollection obj2 = new GarbageCollection();
    obj1 = null;
    obj2 = null;
    System.gc();
    System.runFinalization();
  }
}

