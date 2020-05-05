class Player{
   private:
    char name[50];
    int score;
   public:
    void eliminateRow();//判断是否能消除
    void addRow();//给对方加行数
};