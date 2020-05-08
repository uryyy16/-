class Game{
  public:
    void initDatasPerRound();//每大局游戏初始化
    void drawMap();//绘制地图
    bool checkPut();//判断执行指令时是否越界
    void execClear();//消行
    void addRaw();//给对方加行
    bool checkOver();//判断游戏是否结束
    void recordSquareNow();//记录当前地图v
    void winner();//判断赢家 
    void setGameLevel();//判断游戏等级
};
