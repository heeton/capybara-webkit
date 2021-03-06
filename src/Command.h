#ifndef COMMAND_H
#define COMMAND_H

#include <QObject>
#include <QStringList>

class WebPage;

class Command : public QObject {
  Q_OBJECT

  public:
    Command(WebPage *page, QObject *parent = 0);
    virtual void start(QStringList &arguments);

  signals:
    void finished(bool success, QString &response);

  protected:
    WebPage *page();

  private:
    WebPage *m_page;

};

#endif

