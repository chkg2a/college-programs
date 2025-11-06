import java.io.FileInputStream;
import java.io.FileOutputStream;
import java.io.IOException;
import java.io.FileNotFoundException;

class ReadWrite {
  FileInputStream fins;
  FileOutputStream fouts;

  void copyFile() throws IOException {
    try {
      fins = new FileInputStream("AAAA.txt");
      fouts = new FileOutputStream("BBBB.txt");
      int data;
      while ((data = fins.read()) != -1) {
        fouts.write(data);
      }
    } finally {
      if (fins != null)
        fins.close();
      if (fouts != null)
        fouts.close();
    }
  }
}

class ReadWriteDemo {
  public static void main(String args[]) {
    ReadWrite rw = new ReadWrite();
    try {
      rw.copyFile();
    }catch(FileNotFoundException e){
      System.out.println("Failed : " + e.getMessage());
    }catch(IOException e){
      System.out.println("Read Failed : " + e.getMessage());
    }
  }
}
