


void egg()
{
    poseggx[eggcount]=poshen;
   // printf(" from egg  %d\n",poshen);
    poseggy[eggcount]=0.75*sheight;
    eggcount++;
    if(eggcount>=10)
        eggcount=0;


}
void specialegg()
{
    speggx=poshen;
    speggy=0.75*sheight;

}
void specialegg2()
{
    dspeggx=poshen;
    dspeggy=0.75*sheight;

}
void specialegg3()
{
    poopx=poshen;
    poopy=0.75*sheight;

}
void showlife()
{
    lifex=(poshen+50)%(swidth-80);
    lifey=sheight;

}
void showfood()
{
    foodx=(poshen+50)%(swidth-80);
    foody=sheight;
}
void showbomb()
{

    bombx=(poshen+150)%(swidth-80);
    bomby=sheight;
}
void airflow()
{
    time4=90;
}

void coin()
{
     coinx=(poshen-50)%(swidth-80);
    coiny=sheight;
}


void eggmaintain()
{
    printf("fallrate:%d\n",fallrate);
    for(int a=0;a<10;a++)
    {
        if(poseggx[a]!=-1)
        {
            if(time4>0)
            {
                if(poseggx[a]+30<=swidth)
                {
                    poseggx[a]+=5;
                }
            }


                if(poseggy[a]>10)
                {
                    if(time3>0)
                                    poseggy[a]=poseggy[a]-fallrate+extraspeed;
                     else
            poseggy[a]-=fallrate;

                                 iShowBMP2(poseggx[a],poseggy[a],"dim1.bmp",0xFFFFFF);



                }
        //printf("MOVEMENT: egg=%d poseggx= %d poseggy %d \n",a,poseggx[a],poseggy[a]);

              //      iSetColor(0, 0, 255);



        else
        {
           iShowBMP2(poseggx[a],poseggy[a],"dim1.bmp",0xFFFFFF);
                                iSetColor(0, 255, 255);
                                            poseggx[a]=-1;


        }
        }


            }

    if(speggx!=-1)
    {
        if(speggy>10)
        {
                        if(time4>0)
            {
                if(speggx+5<=swidth)
                {
                    speggx+=5;
                }
            }
                if(time3>0)
                        speggy=speggy-fallrate+extraspeed;
                else
                                            speggy-=fallrate;
                            iShowBMP2(speggx,speggy,"shonar dim.bmp",0xFFFFFF);


        }
        else
        {
                                                    iShowBMP2(speggx,speggy,"shonar dim.bmp",0xFFFFFF);

            speggx=-1;

        }



    }
    if(dspeggx!=-1)
    {
        if(dspeggy>10)
        {
                                    if(time4>0)
            {
                if(dspeggx+5<=swidth)
                {
                    dspeggx+=5;
                }
            }
                if(time3>0)
                        dspeggy=dspeggy-fallrate+extraspeed;

                else
                        dspeggy-=fallrate;



                            iShowBMP2(dspeggx,dspeggy,"blueegg.bmp",0xFFFFFF);

        }
        else
        {
                                        iShowBMP2(dspeggx,dspeggy,"blueegg.bmp",0xFFFFFF);

            dspeggx=-1;
        }


    }
        if(poopx!=-1)
    {
                                if(time4>0)
            {
                if(poopx+5<=swidth)
                {
                    poopx+=5;
                }
            }
        if(poopy>10)
        {
                if(time3>0)
                poopy=poopy-fallrate+extraspeed;
                else
        poopy-=fallrate;
                               iShowBMP2(poopx,poopy,"poopf.bmp",0xFFFFFF);

        }
        else
        {
            poopx=-1;
                                iShowBMP2(poopx,poopy,"poopf.bmp",0xFFFFFF);

        }


    }
            if(lifex!=-1)
    {
                                if(time4>0)
            {
                if(lifex+5<=swidth)
                {
                    lifex+=5;
                }
            }
        if(lifey>10)
        {
                if(time3>0)
                lifey=lifey-fallrate+extraspeed;
                else
                lifey-=fallrate;

                           iShowBMP2(lifex,lifey,"heart.bmp",0xFFFFFF);

        }
        else
        {
                              iShowBMP2(lifex,lifey,"heart.bmp",0xFFFFFF);

            lifey=-1;
        }



    }
                if(foodx!=-1)
    {
                                        if(time4>0)
            {
                if(foodx+5<=swidth)
                {
                    foodx+=5;
                }
            }
        if(foody>10){
        foody-=fallrate;
                           iShowBMP2(foodx,foody,"shield.bmp",0xFFFFFF);

        }
        else
        {
            foodx=-1;
        }


    }
                    if(bombx!=-1)
    {
                                                if(time4>0)
            {
                if(bombx+5<=swidth)
                {
                    bombx+=5;
                }
            }
        if(bomby>10){
                if(time3>0)
        bomby-=fallrate*1;
        else
                    bomby-=fallrate*1;

                            iShowBMP2(bombx,bomby,"thunder.bmp",0xFFFFFF);

        }
        else
        {
                                       iShowBMP2(bombx,bomby,"thunder.bmp",0xFFFFFF);

            bombx=-1;
        }


    }
            if(coinx!=-1)
    {
                                if(time4>0)
            {
                if(coinx+5<=swidth)
                {
                    coinx+=5;
                }
            }
        if(coiny>10)
        {
                if(time3>0)
                coiny=coiny-fallrate+extraspeed;
                else
        coiny-=fallrate;
                               iShowBMP2(coinx,coiny,"coin.bmp",0xFFFFFF);

        }
        else
        {
                                iShowBMP2(coinx,coiny,"coin.bmp",0xFFFFFF);
                                            coinx=-1;


        }


    }

}
void screen()
{
    //printf("posbox %d\n",posbox);
  //  printf(" screen %d fall rate %d nanannalalallaalalla\n\n",vg,fallrate);

if(vg==1)
    iShowBMP(0, 0, "bg1.bmp");
     else if(vg==2)
            iShowBMP(0, 0, "alien2.bmp");
          else  if(vg==3){
                            iShowBMP(0, 0, "dessert.bmp");
                           // printf("lallala\n");
          }
                            else
                                    iShowBMP(0, 0, "bg1.bmp");


            if(cdpos==swidth)
            cdpos=0;
            else
                cdpos+=1;
if(vg==1 || vg==2)
    iShowBMP2(cdpos, sheight-80, "cloud.bmp",0xFFFFFF);
    else
            iShowBMP2(cdpos, sheight-80, "ufo.bmp",0xFFFFFF);


        iSetColor(0, 0, 0);
                iShowBMP(swidth-70,sheight-70, "bpaus2.bmp");
                pause1x=swidth-70;
                pause1y=sheight-70;
        iSetColor(0, 0, 0);
//        printf("MENU COINTIME %d xr %d yr %d\n",cointime,xr1,yr);
        if(cointime<=0)
                      iShowBMP2(posbox, 0, "basket1.bmp",0xFFFFFF);
else
          iShowBMP2(posbox, 0, "basket22.bmp",0xFFFFFF);
        iSetColor(0, 0, 0);
//        printf("%d\n",posbox);
       iLine(0,0.75*sheight,swidth,0.75*sheight);
         iSetColor(0, 0, 0);
        //srand(time(0));
              if(cou%20==0)
                {
         poshen=(rand()%(swidth-50-0+1))+0;
                }

         if(pre==-1){
       //         printf(" from initial pre = %d\n",pre);
            pre=poshen;
         //printf(" same initial %d pre %d posthen\n",pre,poshen);
            egg();
         }
          if(pre!=poshen)
            {
           //     printf(" main calling  pre = %d poshen %d\n ",pre,poshen);
                       if(cou%spfre==0)
            {
                specialegg();
            }
           else if(cou%dspfre==0)
            {
                                specialegg2();


            }
                else       if(cou%poopfre==0)
            {
                                specialegg3();


            }
            else
            egg();
         pre=poshen;
         }



         //printf("%d\n",poshen);

           iShowBMP2(poshen, 0.75*sheight, "hen1.bmp",0xFFFFFF);

                               cou++;



                               if(cou%lifefre==0)
                               {
                                  showlife();
                             }
                           if(cou%foodfre==0)
                            {
                                   showfood();
                               }
                               if(cou%bombfre==0)
                               {
                                   showbomb();
                               }
                               if(cou%airfre==0)
                               {
                                   airflow();
                               }
                               if(cou%coinfre==0)
                               {
                                   coin();
                               }
            eggmaintain();
         score1();
         show_score();
         if(cou>=10000)
            cou=0;
}
