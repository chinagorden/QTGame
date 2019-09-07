#ifndef OBSERVER_H
#define OBSERVER_H
//观测者模式
//观察者类
class Observer
{
public:
    Observer();
    virtual void notify() = 0;
    virtual ~Observer();
};

#endif // OBSERVER_H
