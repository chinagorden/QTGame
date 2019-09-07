#ifndef QRESETBUTTON_H
#define QRESETBUTTON_H

#include <QLabel>
//重新开始按钮键
class QResetButton : public QLabel
{
    Q_OBJECT
public:
    QResetButton( QWidget* parent = 0);

signals:
    void clicked();

public slots:

protected:                   //将发送clicked()信号
    void mousePressEvent(QMouseEvent* event);

};

#endif // QRESETBUTTON_H
