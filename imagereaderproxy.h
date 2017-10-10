#ifndef IMAGEREADERPROXY_H
#define IMAGEREADERPROXY_H

#include <map>
#include <QString>
#include "imagereader.h"
#include "image.h"

using namespace std;

class ImageReaderProxy : public Image
{
public:
    ImageReaderProxy();
    virtual void load(QString path);
    virtual QImage getImage();
private:
    map<QString, ImageReader*> cache;
    QString currentImage;
};

#endif // IMAGEREADERPROXY_H
