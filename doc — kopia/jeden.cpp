

    QRegExp rx_html("\\Dzi�(.*)\\km/h");
    QRegExp rx_newline("(.*)\\n");
    response = manager.get(QNetworkRequest(QUrl("view-source:http://www.skifever.pl/prognoza-pogody-na-narty/prognoza-pogody-polska/prognoza-pogody-dolnoslaskie?tl=9")));
    connect(response,SIGNAL(finished()),&event,SLOT(quit()));
    event.exec();
    html = QString::fromUtf8(response->readAll());
    rx_html.indexIn(html);
    karpacz_source.open(QIODevice::ReadWrite);
    inout1<<rx_html.cap(0);