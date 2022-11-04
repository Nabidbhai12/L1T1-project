int musiccount=0;
int cdpos=0;
int cointime=-1;
int coinx=-1,coiny=-1;
int airfre=300;
int time4=0;
int vg=1;
int tester=1;
int over=0;
int menu=1;
int pause=0;
int play=0;
int swidth=1200,sheight=700;
int poshen=0,posbox=0,poseggx[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1},poseggy[10]={0};
int score=0;
char cur_score[100],buf[100],cur_time[100],buf2[100];

int cou=0,eggcount=0,pre=-1;
int time2=4560;//4080 for 2 min add 34 for each secend
//	function iDraw() is called again and again by the system.
int spfre=200,dspfre=300,poopfre=500,bombfre=600,lifefre=500,coinfre=400;
int speggx=-1,speggy=-1,dspeggx=-1,dspeggy=-1,poopx=-1,poopy=-1,lifex=-1,lifey=-1;

int fallrate=8,foodfre=700,foodx=-1,foody=-1;
int time3=0;
int extraspeed=4;

int mode=0;
char str[100],str2[100];
int len=0;
int score3=0;
int playy,playx;
int exitx,exity,exit1x,exit1y;
int optionx,optiony;
int trophyx,trophyy;
int restartx,restarty;
int resumex,resumey;
int pause1x,pause1y;
int quitx,quity;
int nextx,nexty,backx,backy;
int bombx,bomby;
int textx,texty;
int menu1x,menu1y;
int temp1=0,temp2=0,temp3=0;
int savex,savey;
int contux,contuy;
int option2=0;
int backx2,backy2;
int music=1,musicx=0,musicy;
int y=0,yy=0;
struct nabid{
    int s;
    char str3[100];

    };
int save=0,load=0;
int pox,poy;
int pox1,poy1,pox2,poy2;
int creditx,credity;
int credit=0;
int back3x,back3y;
int track1=1,track2=0,track3=0;
struct nabid parr[100],parr2[100],parr3[100];
int m,m2,m3;
int instu=0;
int instux,instuy;
int lbackx,lbacky;
int xr1=40;

int yr=40;
