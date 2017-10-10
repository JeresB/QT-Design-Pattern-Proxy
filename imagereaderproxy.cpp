#include "imagereaderproxy.h"

ImageReaderProxy::ImageReaderProxy() {}

void ImageReaderProxy::load(QString path) {
    ImageReader* image = new ImageReader();

    if(cache.count(path) == 0) {
        image->load(path);
        cache[path] = image;
    }
    currentImage = path;
}

QImage ImageReaderProxy::getImage() {
    return this->cache[this->currentImage]->getImage();
}
