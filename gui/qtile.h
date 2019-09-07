#ifndef QTILE_H
#define QTILE_H

#include <QLabel>

class Tile;
//界面瓦片类
class QTile : public QLabel
{
    Q_OBJECT
public:
    QTile(const QString & text);
    QTile(Tile* tile);
    //根据数值瓦片值的大小画出界面瓦片了
    void draw();
private:
    Tile* tile;

signals:

public slots:

};

#endif // QTILE_H
