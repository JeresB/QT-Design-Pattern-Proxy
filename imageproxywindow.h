#ifndef IMAGEPROXYWINDOW_H
#define IMAGEPROXYWINDOW_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QVBoxLayout>
#include <QFileDialog>
#include "imagereader.h"
#include "imagereaderproxy.h"

class ImageProxyWindow : public QWidget
{
    Q_OBJECT

public:
    ImageProxyWindow(QWidget *parent = 0);
private:
    ImageReader imageReader;
    ImageReaderProxy imageReaderProxy;
    QLabel *image;
    QPushButton* buttonLoad;
    QPushButton* buttonLoadProxy;
    QPushButton* buttonLoadPath;
    QVBoxLayout* globalLayout;
    QString path;
private slots:
    void load();
    void loadProxy();
    void loadPath();
};

#endif // IMAGEPROXYWINDOW_H
