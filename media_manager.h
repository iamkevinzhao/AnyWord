#ifndef MEDIA_MANAGER_H
#define MEDIA_MANAGER_H

#include <QObject>
#include <memory>
#include <QAudioRecorder>
#include <QTemporaryDir>
#include <QSoundEffect>

class MediaManager : public QObject
{
  Q_OBJECT
public:
  MediaManager();
  bool Init();
public slots:
  void OnStartRecord();
  void OnStopRecord();
  void OnPlayRecord();
private:
  QString TempAudioFilePath();
  std::unique_ptr<QAudioRecorder> q_audio_recorder_;
  std::unique_ptr<QSoundEffect> q_sound_effect_;
  QTemporaryDir temp_dir_;
};

#endif // MEDIA_MANAGER_H
