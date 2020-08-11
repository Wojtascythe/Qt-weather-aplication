#include "downloader.h"

downloader::downloader(QUrl imageUrl, QObject *parent):QObject(parent)

{
    connect(
      &m_WebCtrl, SIGNAL (finished(QNetworkReply*)),
      this, SLOT (fileDownloaded(QNetworkReply*)) );

    QNetworkRequest request(imageUrl);
    m_WebCtrl.get(request);

}
downloader::~downloader() { }

void downloader::fileDownloaded(QNetworkReply* pReply) {
 m_DownloadedData = pReply->readAll();
 //emit a signal
 pReply->deleteLater();
 emit downloaded();
}

QByteArray downloader::downloadedData() const {
 return m_DownloadedData;
}
