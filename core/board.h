#ifndef BOARD_H
#define BOARD_H

#include "core/subject.h"

#include <QVector>
#include <QString>

class Tile;

enum Direction { UP, DOWN, LEFT, RIGHT };
//Board类继承自Subject（存储观察者指针的对象）
class Board : public Subject
{
public:
    //Board类的构造函数
    Board(int dimension);
    Board(const Board& other);
    // destroy board
    ~Board();
    // put the board in start state (everything empty except for two 2 tiles)
    void reset();
    Tile* getTile(int i, int j);
    int getDimension() const { return dimension; }
    void move(Direction direction);
    bool full() const;
    int getPointsScoredLastRound() const { return pointsScoredLastRound; }
    bool isTileCollisionLastRound() const { return tileCollisionLastRound; }
    // is there still a move possible
    bool movePossible() const;

private:
    QVector<QVector<Tile*> > board;
    int dimension;

    // create an empty board
    void init();
    //随意位置生成
    // generate a random, free position on the board
    QVector<int> freePosition();
    //判断是否有变化
    // returns true if the current state of the board is different from the argument
    bool changed(Board& other) const;
    //（i,j）是否在边界内
    bool inbounds(int i, int j);
    // changes state!! (tileCollision & pointsScoredLastRound)
    void moveHorizontally(int i, int j, Direction dir);
    void moveVertically(int i, int j, Direction dir);
    void handleCollision(int i, int j);

    // some reinitalisation for the next round
    void prepareForNextMove();

    int pointsScoredLastRound;
    bool tileCollisionLastRound;
};

#endif // BOARD_H
