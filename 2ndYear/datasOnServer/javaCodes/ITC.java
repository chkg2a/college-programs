class Chat {
  boolean flag = false;

  synchronized void question(String msg) {
    while (flag) {
      try {
        wait();
      } catch (Exception e) {
      }
    }
    flag = true;
    System.out.println(msg);
    notify();
  }

  synchronized void answer(String msg) {
    while (!flag) {
      try {
        wait();
      } catch (Exception e) {
      }
    }
    flag = false;
    System.out.println(msg);
    notify();
  }
}

class User1 implements Runnable {
  Chat chat;
  String[] st = { "Hi", "How are you ?", "I am also doing fine!", "Bye-Bye" };

  User1(Chat chat) {
    this.chat = chat;
    Thread th = new Thread(this, "User 1");
    th.start();
  }

  public void run() {
    try {
      for (int i = 0; i < st.length; i++) {
        chat.question(st[i]);
        Thread.sleep(500);
      }
    } catch (Exception e) {
    }
  }
}

class User2 implements Runnable {
  Chat chat;
  String[] st = { "Hello ", "I am good, what about you?", "Great! bye...." };

  User2(Chat chat) {
    this.chat = chat;
    Thread th = new Thread(this, "User 2");
    th.start();
  }

  public void run() {
    try {
      for (int i = 0; i < st.length; i++) {
        chat.answer(st[i]);
        Thread.sleep(500);
      }
    } catch (Exception e) {
    }
  }
}

class ITC {
  public static void main(String args[]) {
    Chat chat = new Chat();
    new User1(chat);
    new User2(chat);
  }
}
