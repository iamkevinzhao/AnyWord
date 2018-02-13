#ifndef VOCABULARY_H
#define VOCABULARY_H

#include <QObject>
#include "word_entry.h"
#include <QHash>

class Vocabulary : public QObject
{
  Q_OBJECT
public:
  Vocabulary();
  void LoadWord(const WordEntry& entry);
  void PrintAll();
private:
  QHash<QString, WordEntry> vocabulary_;
};

#endif // VOCABULARY_H