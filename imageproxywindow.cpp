#include "imageproxywindow.h"

ImageProxyWindow::ImageProxyWindow(QWidget *parent)
    : QWidget(parent),
      globalLayout(new QVBoxLayout()),
      buttonLoad(new QPushButton("Load without proxy")),
      buttonLoadProxy(new QPushButton("Load with proxy")),
      buttonLoadPath(new QPushButton("Load Path")),
      image(new QLabel())
{
    image->setAlignment(Qt::AlignCenter);

    globalLayout->addWidget(image);
    globalLayout->addWidget(buttonLoadPath);
    globalLayout->addWidget(buttonLoad);
    globalLayout->addWidget(buttonLoadProxy);

    //path = QFileDialog::getOpenFileName(this, "Open Image", "Images/", "Image Files (*.png *.jpg *.bmp)");

    this->setLayout(globalLayout);

    connect(this->buttonLoad, SIGNAL(released()), this, SLOT(load()));
    connect(this->buttonLoadProxy, SIGNAL(released()), this, SLOT(loadProxy()));
    connect(this->buttonLoadPath, SIGNAL(released()), this, SLOT(loadPath()));
}

void ImageProxyWindow::load() {
    this->imageReader.load(this->path);
    this->image->setPixmap(QPixmap::fromImage(this->imageReader.getImage()));
}
void ImageProxyWindow::loadProxy() {
    this->imageReaderProxy.load(this->path);
    this->image->setPixmap(QPixmap::fromImage(this->imageReaderProxy.getImage()));
}

void ImageProxyWindow::loadPath() {
    this->path = QFileDialog::getOpenFileName(this, "Open Image", "Images/", "Image Files (*.png *.jpg *.bmp)");
}
