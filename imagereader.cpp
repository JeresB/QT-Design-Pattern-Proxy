#include "imagereader.h"

void ImageReader::load(QString path) {
    this->image.load(path);
}

QImage ImageReader::getImage() {
    return this->image;
}
