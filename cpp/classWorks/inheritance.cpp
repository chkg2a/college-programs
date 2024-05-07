// Write a C++ program tha thas a class called Multimedia, which has two
// methods, play and stop. Define another class Audio, which inherits from the
// class Multimedia and has specific functions to play Audio files, such as
// playDudio() and stopAudio(). Define another class Video which also inherits
// from the class Multimedia and has functions specific to playing video files
// such as playVideo() and stopVideo(). Finally, define a class Smartphone which
// should be able to play both audio and video. For this class Smartphone
// inherits from both Audio and Video classes. Instantiate few objects of class
// Smartphone and call both play and stop functions to splay and stop audio and
// video

#include <iostream>
#include <stdlib.h>

using namespace std;

class Multimedia {
public:
  void play() { cout << "Playing "; };
  void stop() { cout << "Playing "; };
  void showCount() { cout << "You have played "; };
};

class Audio : public Multimedia {
private:
  int playCount = 0;

public:
  void playAudio() {
    cout << "audio\n";
    playCount++;
  };
  void stopAudio() { cout << "audio\n"; };
  void showCount() {
    Multimedia::showCount();
    cout << playCount << " audio";
  }
  void play() {
    Multimedia::play();
    playAudio();
  }
  void stop() {
    Multimedia::stop();
    stopAudio();
  }
};

class Video : public Multimedia {
private:
  int playCount = 0;

public:
  void playVideo() {
    cout << "video\n";
    playCount++;
  };
  void stopVideo() { cout << "video\n"; };
  void showCount() {
    Multimedia::showCount();
    cout << playCount << " video";
  }
  void play() {
    Multimedia::play();
    playVideo();
  }
  void stop() {
    Multimedia::stop();
    stopVideo();
  }
};

class Smartphone : public Audio, public Video {
public:
  void play() { cout << "Playing both audio and video files."; }
  void stop() { cout << "Stopping both audio and video files."; }
};

int main(int argc, char *argv[]) {
  Smartphone *phone1 = new Smartphone();
  Smartphone *phone2 = (Smartphone *)malloc(sizeof(Smartphone));
  Smartphone phone3;
  phone1->playVideo();
  phone1->stopVideo();
  phone2->playAudio();
  phone2->stopAudio();
  return 0;
}
