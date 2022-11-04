#include<time.h>
# include "iGraphics.h"
//#include "nabidheader.h">
#include "header1.h"
#include "menus.h"
#include "scorestuff.h"
#include "Eggmaintain.h"
#include "initialization.h"
#include "savegame.h"
#include "gl.h"
#include<windows.h>
#include <mmsystem.h>
#include "header2.h"
#pragma comment(lib,"Winmm.lib")




void pasa(int mx,int my)
{
 //   printf("%d %d ualaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n",mx,my);
    if(play==1)
    {
        if(mx>=0 && mx<=swidth)
        posbox=mx;
    }
}
void mousePassiveMovehandlerFF(int mx,int my)
{
   //     printf("%d % ulallllllllllllllllllllllllllllld\n",mx,my);

    pasa(mx,my);
    glFlush();
}

void iDraw()
{
    musiccount++;
    if(musiccount>=3500)
    {
        soundon();
        musiccount=0;
    }
    glutPassiveMotionFunc(mousePassiveMovehandlerFF);
    draw();
}
void iMouseMove(int mx, int my)
{
    //printf("x = %d, y= %d\n",mx,my);
    //place your codes here
    //if((mx>=(swidth/2)-50 && mx<=(swidth/2)+50) && (my>=(sheight*0.5)-50 && my<=(sheight*0.5)+50))
      //  menu=0;
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
         //   printf("from iMOUSE play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);


    int tem=0;
    if(pause==1 && tem==0 && over==0 && score3==0 && play==0 && menu==0)
    {
        tem++;
       // printf("pause\n");
         if(((mx>=(quitx)-50 && mx<=(quitx)+50) && (my>=(quity-50) && my<=(quity+50))) && pause==1 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
                {

         //               printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

                    exit(0);

                }
                if((mx>=(resumex)-20 && mx<=(resumex)+80) && (my>=(resumey)-20 && my<=(resumey)+80) && pause==1 && play==0 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
         {

        menu=0;
        play=1;
        over=0;
        pause=0;
        score3=0;
           //             printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);



               // printf( "resume making menu %d score3 %d\n",menu,score3);


         }
                         if((mx>=(restartx)-20 && mx<=(restartx)+80) && (my>=(restarty)-20 && my<=(restarty)+80) && pause==1 && play==0 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
         {

        menu=0;
        ini();
        play=1;
        over=0;
        pause=0;
        score3=0;
             //           printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);



               // printf( "resume making menu %d score3 %d\n",menu,score3);


         }
         if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx>=0 && mx<=400 )&&(my>=0 && my<=400) )
            {
                                    //printf("calling save\n");
play=0;
menu=1;
over=0;
pause=0;
score3=0;
savegame();
FILE *fp;
fp=fopen("temp.txt","w");
fprintf(fp,"%d",1);
fclose(fp);


               //         printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

            }

    }
        if(pause==0 && tem==0 && over==0 && score3==0 && play==1 && menu==0)

    {
        tem++;
                //printf("play\n");


    if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
    {
               if(posbox<swidth && play==1)
   {

    posbox+=10;
   }
    }

if(posbox>=30 && play==1 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
   {
       if(posbox>10 && play==1)
 posbox-=10;
   }
                     if((mx>=(pause1x)-50 && mx<=(pause1x)+50) && (my>=(pause1y-50) && my<=(pause1y)+50) && menu==0 && play==1 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
                    {
                                menu=0;
        play=0;
        over=0;
        pause=1;
        score3=0;
        credit=0;
        option2=0;
                  //      printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

    //                                    printf( "play making play %d over %d\n",play,over);

              //  printf( "pause making menu %d score3 %d\n",menu,score3);


                    }



    }

            if(pause==0 && tem==0 && over==0 && score3==1 && play==0 && menu==0)

    {
        tem++;
               // printf("score3\n");

        if( (mx>=(backx)-100 && mx<=(backx)+100) && (my>=(backy-100) && my<=(backy+100)) && menu==0 && score3==1 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )

                {

        menu=1;
        play=0;
        over=0;
        pause=0;
        score3=0;
                 //       printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

          //                              printf( "play making play %d over %d\n",play,over);


                }

    }
            if(pause==0 && tem==0 && over==1 && score3==0 && play==0 && menu==0)

    {
        tem++;
             //   printf("over\n");

                        if(((mx>=(menu1x)-50 && mx<=(menu1x)+50) && (my>=(menu1y-50) && my<=(menu1y+50))) && over==1 && play==0 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )

                {
                    over=0;
                        menu=1;
                        play=0;
                        score3=0;
                        pause=0;
                        ini();
//                                                             printf("score3  back play%d menu %d over %d score3 %d\n",play,menu,over,score3);
              //          printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);


                }
                if( button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && (mx >=(exit1x)-30 && mx <= (exit1x)+30 && my >= (exit1y)-30 && my <=(exit1y)+30 && over == 1 ))
      {
          exit(0);

      }
              if(mx >=(textx) && mx <= (textx)+450 && my >= (texty)-30 && my <=(texty)+30 && mode == 0  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN     )
		{
		//    printf("yyo\n");
			mode = 1;

		}

    }

                    if(pause==0 && tem==0 && over==0 && score3==0 && play==0 && menu==1 && credit==1)
                    {
                        tem++;
                                if( (mx>=(back3x)-150 && mx<=(back3x)+150) && (my>=(back3y-150) && my<=(back3y+150))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )

                                {
                                    menu=1;
                                    credit=0;
                                }



                    }
                                        if(pause==0 && tem==0 && over==0 && score3==0 && play==0 && menu==1 && instu==1)
                    {
                        tem++;
                                if( (mx>=(lbackx)-150 && mx<=(lbackx)+150) && (my>=(lbacky-150) && my<=(lbacky+150))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )

                                {
                                    menu=1;
                                    instu=0;
                                }



                    }





                if(pause==0 && tem==0 && over==0 && score3==0 && play==0 && menu==1 && option2==1)

    {
        tem++;
                if( (mx>=(backx2)-150 && mx<=(backx2)+150) && (my>=(backy2-150) && my<=(backy2+150))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
                {
                    pause=0;
                    menu=1;
                    option2=0;
                    score3=0;
                    over=0;
               //         printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);


                }
                                if( (mx>=(musicx)-50 && mx<=(musicx)+50) && (my>=(musicy-50) && my<=(musicy+50))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
                                {
                                    music=music^1;
                                    tester=1;
                 //                                           printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);


                                }
                                                if( (mx>=(pox)-50 && mx<=(pox)+80) && (my>=(poy-50) && my<=(poy+50))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
                                                                    {
                   //                                                     printf(":timeinidone\n");
                                                                        timeini();
                                                                    }
if( (mx>=(pox1)-30 && mx<=(pox1)+50) && (my>=(poy1-50) && my<=(poy1+50))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
                                                                    {
                     //                                                   printf(":timeini2done\n");
                                                                        timeini1();
                                                                    }
                                                                    if( (mx>=(pox2)-50 && mx<=(pox2)+150) && (my>=(poy2-50) && my<=(poy2+50))  &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
                                                                    {
                       //                                                 printf(":timeinidone2\n");
                                                                        timeini2();
                                                                    }

    }
                if(pause==0 && tem==0 && over==0 && score3==0 && play==0 && menu==1 && option2==0 && credit==0)

    {

    tem++;

            //printf("menu coming \n");
                                        if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((my)>=sheight/2-40 && my<=sheight/2+40 )&&(mx>=swidth/2-60 && mx<=swidth/2+60))
                                        {
                                            menu=1;
                                            score3=0;
                                            play=0;
                                            option2=1;
                                            over=0;
                                            pause=0;
              //          printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);


                                        }


                            if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN && ((mx)>=0 && mx<=600 )&&(my>=0 && my<=300))
            {
                //               printf("calling load\n");
                play=1;
                menu=0;
                over=0;
                score3=0;
                pause=0;
                load=1;
//                                        printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);


            }


        if((mx>=(playx)-50 && mx<=(playx)+100) && (my>=(playy)-50 && my<=(playy)+50) && menu==1 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
      {
        ini();

        menu=0;
        play=1;
        over=0;
        pause=0;
        score3=0;
  //                      printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

        //                        printf( "play making play %d over %d\n",play,over);



      }
              if((mx>=(trophyx-50) && mx<=(trophyx+250)) && (my>=(trophyy)-50 && my<=(trophyy+250)) && menu==1 && play==0 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
        {
                   menu=0;
        play=0;
        over=0;
        pause=0;
        score3=1;
    //                    printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);



        }

                        if(((mx>=(exitx)-50 && mx<=(exitx)+100) && (my>=(exity-50) && my<=(exity+50))) && menu==1 &&  button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )

                {
                    exit(0);

                }
                if(mx >=(creditx-100) && mx <= (creditx)+240 && my >= (credity)-120 && my <=(credity)+100 && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
        {
            credit=1;
            menu=1;
            option2=0;
            score3=0;
            pause=0;
      //      printf("hdddddddddddddddddddddddddddddddddddddddddfdhhhhhhhhhhhhhhhhhhhhhhhhh\n");
        //                            printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

                                    showcredit();
        }
                    if(mx >=(instux-100) && mx <= (instux+100) && my >= (instuy-100) && my <=(instuy+100) && button == GLUT_LEFT_BUTTON && state == GLUT_DOWN )
        {
            credit=0;
            instu=1;
            menu=1;
            option2=0;
            score3=0;
            pause=0;
          //  printf("nabid best nabid best nabid best nabid best\n");
            //                        printf("from iMOUSE divison play%d menu %d over %d score3 %d pause %d option %d credit %d\n",play,menu,over,score3,pause,option2,credit);

                                    showinstu();
        }

    }














}
//void glutPassiveMotionFunc(void (*func)(int x, int y));
//{

//}


/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
    if(key=='u'){

               // printf("calling load\n");
                play=1;
                menu=0;
                over=0;
                score3=0;
                pause=0;
//                                loadgame();


                //printf("play %d load %d over %d pause %d\n",play,menu,over,pause);

            }

    if(key=='g')
    {
                  //                      printf("calling save\n");
play=0;
menu=1;
over=0;
pause=0;

//                savegame();

    }
if(key=='d')
   {

       if(posbox<swidth-30){
           // if(cointime>0)
           // posbox+=60;
       //else
    posbox+=30;
       }

    //printf("from keyboard %d\n",posbox);

   }
if(key=='a')
   {
       if(posbox>=30){
         //   if(cointime>0)
           // posbox-=60;
       //else
    posbox-=30;
       }
//        printf("from keyboard %d\n",posbox);


   }
   if(key=='p')
   {
       pause=1;
   }

	int i;
	if(mode == 1)
	{
        if(key == '\r')
		{
			mode = 0;
			strcpy(str2, str);
			printf("%s\n", str2);
			for(i = 0; i < len; i++)
				str[i] = 0;
			len = 0;
			//printf("calling\n");
			scorestore();
		}
		else
		{
		    if(key!=8)
            {


			str[len] = key;
			len++;
            }
		}


    //place your codes for other keys here
}
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

   // if(key == GLUT_KEY_END)
    //{
      //  exit(0);
    //}
    //place your codes for other keys here
}



int main()
{

                                PlaySound((LPCSTR) "home.wav", NULL, SND_FILENAME | SND_ASYNC);
                                printf("donee2\n");



//iSetTimer(25,playmusic);
    //place your own initialization codes here.

   // iSetTimer(500,fn);
   if(music==1)
    {
soundon();
tester=0;

    }





    iInitialize(swidth, sheight, "Demo!");
    return 0;
}
