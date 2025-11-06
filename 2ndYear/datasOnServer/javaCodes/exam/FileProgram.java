import java.io.*;
class FileProgram {
    public static void main(String args[]){
        FileInputStream fins = null;
        FileOutputStream fouts = null;
        try {
            fins = new FileInputStream("AAA.txt");
            fouts = new FileOutputStream("BBB.txt");
            int data;
            while((data = fins.read()) != -1){
               fouts.write(data);
            }
        }catch(IOException e){
            System.out.println(e.getMessage());
        }finally{
          try {
            if (fouts != null)
              fouts.close();
            if (fins != null)
              fins.close();
          }catch(IOException e) {
            System.out.println(e.getMessage()) ;
          }
        }
    }
}
