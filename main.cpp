#include <QtGui/QApplication>
#include "Catcher.h"

int main(int argc, char *argv[]){

    QApplication a(argc, argv);

    QWebView* webView = new QWebView;

    Catcher* cc=new Catcher(webView);

    webView->load(QUrl("http://www.vk.com"));
    webView->show();

    QObject::connect(webView,SIGNAL(loadStarted()),cc,SLOT(Catch()));
    
    return a.exec();
}





/*

QWebView* webView = new QWebView;

webView->load(QUrl("http://www.vk.com"));
webView->show();

webView->page()->mainFrame()->findFirstElement("name");

//ui->webView()->page()->currentFrame()->toHtml();
//webView->page()->currentFrame()->toHtml();

//*/

/*
QLabel lbl("Hello, World!");
lbl.show();
*/
//MainWindow w;
//w.show();
