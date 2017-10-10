#ifndef IMAGE_H
#define IMAGE_H

#include <QString>
#include <QImage>

class Image
{
public:
    virtual void load(QString path) = 0;
    virtual QImage getImage() = 0;
};

#endif // IMAGE_H
