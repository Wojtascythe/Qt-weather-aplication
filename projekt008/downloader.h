#ifndef DOWNLOADER_H
#define DOWNLOADER_H

#include <QObject>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
class downloader: public QObject
{
    Q_OBJECT
public:
   explicit downloader(QUrl imageUrl, QObject *parent = nullptr);
    virtual ~downloader();
      QByteArray downloadedData() const;
signals:
  void downloaded();

 private slots:
  void fileDownloaded(QNetworkReply* pReply);

 private:
  QNetworkAccessManager m_WebCtrl;
  QByteArray m_DownloadedData;

};

#endif // DOWNLOADER_H
