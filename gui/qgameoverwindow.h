#ifndef QGAMEOVERWINDOW_H
#define QGAMEOVERWINDOW_H

#include <QWidget>

class QResetButton;
// 游戏结束类
class QGameOverWindow : public QWidget
{
    Q_OBJECT
public:    //明确的类
    explicit QGameOverWindow(QWidget *parent = 0);

    QResetButton* getResetBtn() const;

signals:

public slots:

private:
    QResetButton* reset;

};

#endif // QGAMEOVERWINDOW_H
