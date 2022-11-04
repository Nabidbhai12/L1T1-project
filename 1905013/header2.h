



void showtime()
{
    int ti;
    if(time2==0)
        {over=1;
        play=0;
        }
    ti=(int)time2/50;//34
     strcpy(cur_time,"time: ");

    strcat(cur_time,itoa(ti,buf2,10));
    iSetColor(255,255,0);
    iText(swidth-100,sheight*0.80,cur_time, GLUT_BITMAP_TIMES_ROMAN_24);
}

void draw()
{
                //printf("menu %d play %d\n",menu,play);

    //printf("%")
                                            //    printf("idraw play%d menu %d over %d score3 %d option2 %d \n",play,menu,over,score3,option2);

        if(menu==1 && pause==0 && over==0 && score3==0 && play==0)
        {
            if(option2==1){
                    //printf("calling option\n");
                showoption();
            }
            else if(credit==1)
            {
                showcredit();
            }
            //show instu here
            else if(instu==1)
            {
                showinstu();
            }
            else{

                                   showmenu();

                                  //      printf("calling menu\n");

            }

        }
               if(menu==0 && pause==1 && over==0 && score3==0 && play==0)

        {
            showpause();



        }

                        if(menu==0 && pause==0 && over==0 && score3==1 && play==0)
                       {
                           showscore2();
                       }

if(play==1 && menu==0 && over==0 && pause==0 && score3==0)
    {
     //   printf("here we are\n");
        FILE *fp;
        fp=fopen("temp.txt","r");
        //fscanf(fp,"%d",&load);
        fprintf(fp,"%d",0);
        fclose(fp);
        if(load==1)
        {

             //   printf("loading");
                load=0;
                loadgame();
               // printf("ended\n");


        }


        clock_t t;
    t = clock();
    iClear();
   screen();

    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    time2-=time_taken;
    if(time3>=0)
    {
            time3-=time_taken;


    }
     if(time4>=0)
    {
            time4-=time_taken;


    }
      if(cointime>0)
    {
            cointime-=time_taken;


    }
    if(cointime<=0)
    {
        xr1=40;
        yr=40;
    }

    showtime();
    printf("continuing\n");
}

if(menu==0 && pause==0 && over==1 && play==0 )
{
showover();




}
}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/

