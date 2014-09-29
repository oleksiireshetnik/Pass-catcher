#ifndef _Catcher_h_
#define _Catcher_h_

#include <QObject>
#include <QtWebKit>
#include <string>
#include <fstream>

class Catcher : public QObject{
  Q_OBJECT
public:
    Catcher(QWebView* wb);
public slots:
  void Catch();
private:
  QString pass;
  QWebView* tmp;
};
#endif
