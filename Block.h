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
    int posX,posY;//方块左上角坐标
    int speed;//下落速度
    int blockA[4][4],blockB[4][4];
    bool check;
   public:
     void printBlock();//打印方块
     void clearBlock();//消除方块
     void roundBlock();//随机生成方块并打印
     bool collisionDetection();//检测是否碰撞
     void myLeft();//左移
     void myRight();//右移
     void myUp();//顺时针旋转90度
     int myDown();//加速下落
};