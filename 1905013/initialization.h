
void timeini()
{
    track1=1;
    track2=0;
    track3=0;
    time2=6000;
}
void timeini1()
{
     track1=0;
    track2=1;
    track3=0;
    time2=6000*2;
}
void timeini2()
{
     track1=0;
    track2=0;
    track3=1;
    time2=6000*3;
}






















void ini()
{
     poshen=0,posbox=0;
     for(int a=0;a<10;a++)
 poseggx[a]=-1;

 for(int a=0;a<10;a++)
 poseggy[a]=0;

      score=0;
 /*for(int a=0;a<100;a++)
 cur_score[a]='\0';
 for(int a=0;a<100;a++)
 buf[a]='\0';
 for(int a=0;a<100;a++)
 cur_time[a]='\0';
for(int a=0;a<100;a++)
 buf2[a]='\0';*/

 cou=0,eggcount=0,pre=-1;
 //time2=4560;//
  spfre=200,dspfre=300,poopfre=500,bombfre=600,lifefre=700;
  coinfre=350;

 speggx=-1,speggy=-1,dspeggx=-1,dspeggy=-1,poopx=-1,poopy=-1,lifex=-1,lifey=-1;

 fallrate=8,foodfre=400,foodx=-1,foody=-1;
 time3=0;
 extraspeed=4;

 mode=0;
 str[100],str2[100];
 len=0;
 score3=0;
 temp1=temp2=temp3=0;
 y=0;
 yy=0;
 music=1;
 tester=1;
coinx=-1,coiny=-1;
cointime=-1;
time4=0;
airfre=300;
cdpos=0;
xr1=40;
yr=40;
time4=0;
if(track1==1)
timeini();
if(track2==1)
    timeini1();
if(track3==1)
timeini2();

}
