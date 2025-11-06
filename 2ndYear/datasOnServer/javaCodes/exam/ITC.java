class Chat {
  boolean flag = false;

  public synchronized void Question(String msg) {
    if (flag) {
      try {
        wait();
      } catch (Exception e) {
      }

    }
    System.out.println(msg);
    flag = true;
    notify();
  }

  public synchronized void Answer(String msg) {
    if (!flag) {
      try {
        wait();
      } catch (Exception e) {
      }

    }
    System.out.println(msg);
    flag = false;
    notify();
  }
}

class User1 implements Runnable {
  Chat c;
  String msgs[] = { "hello", "how are you?", "I'm also good thank you" };

  User1(Chat c) {
    this.c = c;
    new Thread(this).start();
  }

  public void run() {
    for (int i = 0; i < msgs.length; i++) {
      c.Question(msgs[i]);
    }
  }
}

class User2 implements Runnable {
  Chat c;
  String msgs[] = { "hi", "I'm good", "What about you?" };

  User2(Chat c) {
    this.c = c;
    new Thread(this).start();
  }

  public void run() {
    for (int i = 0; i < msgs.length; i++) {
      c.Answer(msgs[i]);
    }
  }
}

class ITC {
  public static void main(String args[]) {
    Chat c = new Chat();
    new User1(c);
    new User2(c);
  }
}
