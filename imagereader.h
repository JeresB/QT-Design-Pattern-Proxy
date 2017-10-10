#ifndef IMAGEREADER_H
#define IMAGEREADER_H

#include <QImage>
#include "image.h"

class ImageReader : public Image
{
public:
    virtual void load(QString path);
    virtual QImage getImage();
private:
    QImage image;
};

#endif // IMAGEREADER_H
