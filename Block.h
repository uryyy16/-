class Block{
   private:
    int block00[4][4];
    int block01[4][4];
    int block02[4][4];
    int block03[4][4];
    int block04[4][4];
    int block05[4][4];
    int block06[4][4];
    int block07[4][4];
    int block08[4][4];
    int block09[4][4];
    int block10[4][4];
    int block11[4][4];
    int block12[4][4];
    int block13[4][4];
    int block14[4][4];
    int block15[4][4];
    int block16[4][4];
    int block17[4][4];
    int block18[4][4];
    int blockA[4][4],blockB[4][4];
   public:
    void initDatasPerSquare();//俄罗斯方块的迭代
     void drawItem();//单个方块的绘制函数
     void drawSquareNow();//当前俄罗斯方块绘制
     void drawSquareNext();//下一个俄罗斯方块绘制
};
