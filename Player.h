class Player{
   private:
    char name[50];
    int score;
   public:
    void kbhit();//检测键盘点击
    void getCmd();//接受指令
    void execCmd(Cmd cmd);//判断执行哪种指令
    void moveRotate();//执行旋转指令
    void moveLeft();//执行左移指令
    void moveRight();//执行右移指令
    void moveDown();//执行快速下降指令
};
