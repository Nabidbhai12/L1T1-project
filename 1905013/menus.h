void soundon()
{
 //   printf("hello sound on \n");
                            PlaySound((LPCSTR) "home.wav", NULL, SND_FILENAME | SND_ASYNC);

                            printf("done");


}
void soundoff()
{
  //  printf("lallalaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa\n");

                          //  PlaySound((LPCSTR) NULL, NULL, SND_FILENAME | SND_ASYNC);


}







void swapi(struct nabid *a,struct nabid *b)
{
    struct nabid c;
    c.s=a->s;
    strcpy(c.str3,a->str3);

     a->s=b->s;
    strcpy(a->str3,b->str3);

    b->s=c.s;
    strcpy(b->str3,c.str3);


}
void showmenu()
{

temp1=0;
temp2=0;
temp3=0;
    iClear();
    int a=swidth/2,b=sheight/2;

        iShowBMP(0,0,"menu2.bmp");
                playx=a;
        playy=b+100;
        iShowBMP(playx,playy,"playb.bmp");


           optionx=a;
           optiony=b;
                iShowBMP2(optionx,optiony,"optionb.bmp",0);

                creditx=swidth-0.97*swidth;
                credity=sheight-200;

                iShowBMP2(creditx,credity,"buttonc.bmp",0);

                                  exitx=a;
                                exity=b-100;
                                iShowBMP2(exitx,exity,"exitb.bmp",0);

 trophyx=a+300;
        trophyy=sheight-150;

        iShowBMP2(trophyx,trophyy,"trophy.bmp",0);



                contux=200;
        contuy=200;
         iShowBMP2(contux,contuy,"continue.bmp",0);


   instux=swidth-0.2*swidth;
                instuy=sheight-sheight*.70;

                iShowBMP2(instux,instuy,"instru.bmp",0);

}
void showcredit()
{
 //   printf("NNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNNN\n");
    iClear();
    iShowBMP(0,0,"home.bmp");
    back3x=100;
    back3y=100;
        iShowBMP(back3x,back3y,"backb.bmp");
                iSetColor(0,0,0);
        iText(500,sheight-37,"CREDIT",GLUT_BITMAP_HELVETICA_18);
        iSetColor(0,255,0);
        iSetColor(255,25,25);
        iText(40,265,"This is the term project of level 1 term 1, created by HAFIJUL HOQUE CHOWDHURY(1905013)",GLUT_BITMAP_HELVETICA_18);
     //   iText(40,265-25,"under the supervision of GOD.",GLUT_BITMAP_HELVETICA_18);

}
void showinstu()
{
    iClear();
        iShowBMP(0,0,"instructions2.bmp");
        lbackx=100;
        lbacky=100;
                iShowBMP(lbackx,lbacky,"backb.bmp");


}
void showoption()
{
   // iClear();
       if(music==0 && tester==1)
    {
        tester=0;

soundoff();
    }
        if(music==1 && tester==1)
    {
        tester=0;
      //  printf("MUSIC ON YYAAY\n");
soundon();

    }
    iShowBMP(0,0,"pauseb.bmp");
        backx2=swidth-220;
        backy2=470;
        iText(500,sheight-37,"OPTION",GLUT_BITMAP_HELVETICA_18);
        iShowBMP(200,300,"music.bmp");
        musicx=600;
        musicy=300;
        if(music==1)
                    iShowBMP(musicx,musicy,"on.bmp");
else
            iShowBMP(musicx,musicy,"off.bmp");

        iShowBMP2(backx2,backy2,"backb.bmp",0);
                iText(musicx-400,musicy-100,"TIME DURATION",GLUT_BITMAP_HELVETICA_18);

        pox=musicx;
        poy=musicy-100;
        if(track1==1)
                iShowBMP2(pox,poy,"bar1.bmp",0xFFFFFF);
                else
                                    iShowBMP2(pox,poy,"crosspic.bmp",0xFFFFFF);

                        pox1=musicx+50;
        poy1=musicy-100;
        if(track2==1)
                iShowBMP2(pox1,poy1,"yo1.bmp",0xFFFFFF);
                else
                                                    iShowBMP2(pox1,poy1,"crosspic.bmp",0xFFFFFF);


        pox2=pox1+100;
        poy2=musicy-100;
        if(track3==1)
                iShowBMP2(pox2,poy2,"you.bmp",0xFFFFFF);
                else
                                                                      iShowBMP2(pox2,poy2,"crosspic.bmp",0xFFFFFF);




}

void showpause(){
iClear();
    iShowBMP(0,0,"bg3.bmp");

      restartx=swidth/2-40;
        restarty=sheight/2;
        iShowBMP(restartx,restarty,"restart.bmp");
      resumex=swidth/2+150;
        resumey=sheight/2+50;
        iShowBMP2(resumex,resumey,"resume.bmp",0);

        quitx=swidth/2+400;
                quity=sheight/2;
                iShowBMP2(quitx,quity,"quitb.bmp",0);


savex=200;
savey=50;
                iShowBMP2(savex,savey,"savebutton.bmp",0);


              //  iShowBMP2(swidth/2+100,sheight/2+100,"home.bmp",0);

}
void showover(){



    iClear();
    iShowBMP(0,0,"cre.bmp");

            strcpy(cur_score,"YOUR SCORE: ");
    strcat(cur_score,itoa(score,buf,10));
    iShowBMP(swidth/4,sheight/4,"score.bmp");
        iSetColor(255,0,0);
    iText(swidth/2-100,sheight/2,cur_score, GLUT_BITMAP_TIMES_ROMAN_24);
  ;
	iSetColor(255, 0, 0);
	iRectangle(400, 250, 450, 30);
	textx=400;
	texty=270;
	if(mode == 1)
	{
		iSetColor(255, 255, 255);
		iText(textx, texty, str);

	}
	    iShowBMP(100,200,"exitb.bmp");
	    exit1x=100;
	    exit1y=200;
iShowBMP(swidth-170,250,"menub.bmp");
	    menu1x=swidth-170;
	    menu1y=250;


}
void showscore2()
{
    struct nabid arr;

    printf("entering");
    int h1=sheight*.80,h2,h3;
    char pt[100],pt2[100];
    iClear();
    iShowBMP(0,0,"cre.bmp");
    backx=swidth-180;
        backy=350;
        iShowBMP2(backx,backy,"backb.bmp",0);



     //   nextx=swidth-180;
       //     nexty=350;
         //   iShowBMP(nextx,nexty,"nextb.bmp");
///struct nabid *parr;

                FILE *fp;

if(temp1==0)
{

        printf("loading\n");
temp1++;
    fp=fopen("teno1.txt","r");
    fscanf(fp,"%d\n",&m);
    fclose(fp);
///parr=(struct nabid*)malloc(sizeof(struct nabid)*m);
//printf("m= %d\n",m);


        fp=fopen("myfile1.dat","rb");

   for(int a=0;a<m;a++)
    {


//     iSetColor(255,0,0);
         fread(&arr,sizeof(struct nabid),1,fp);
         parr[a].s=arr.s;
          strcpy(parr[a].str3,arr.str3);


    }

for(int a=0;a<m;a++)
{
    for(int b=a+1;b<m;b++)
    {
        if(parr[a].s<parr[b].s)
    swapi(&parr[a],&parr[b]);

    }
}

}
if(m>10)
    m=10;

   for(int a=0;a<m;a++){
                     iSetColor(100,200,25);

    iText(20,sheight*.90,"2 MIN",GLUT_BITMAP_HELVETICA_18);
                     iSetColor(100,200,25);

    iText(20,h1,parr[a].str3, GLUT_BITMAP_TIMES_ROMAN_24);
    //printf(" 2 min %s\n",parr[a].str3);
    //printf(" 2 min %d\n",parr[a].s);
    strcpy(pt2,itoa(parr[a].s,pt,10));
                         iSetColor(100,200,25);

         printf("2 min %s\n",pt2);
        iText(180,h1,pt2, GLUT_BITMAP_TIMES_ROMAN_24);


    h1-=50;
   }
//temp++;
 h2=sheight*.80;;

if(temp2==0)

    {
        printf("loading1\n");
        temp2++;
    fp=fopen("teno2.txt","r");
    fscanf(fp,"%d\n",&m2);
printf("m2 %d\n",m2);
    fclose(fp);
        fp=fopen("myfile2.dat","rb");

   for(int a=0;a<m2;a++)
    {


     iSetColor(255,0,0);
         fread(&arr,sizeof(struct nabid),1,fp);
         parr2[a].s=arr.s;
          strcpy(parr2[a].str3,arr.str3);


    }

for(int a=0;a<m2;a++)
{
    for(int b=a+1;b<m2;b++)
    {
        if(parr2[a].s<parr2[b].s)
            swapi(&parr2[a],&parr2[b]);

    }
}
   }
printf("m2 %d\n",m2);
if(m2>10)
m2=10;
   for(int a=0;a<m2;a++){
                 iSetColor(255,255,0);
    iText(250,sheight*.90,"4 MIN",GLUT_BITMAP_HELVETICA_18);
            iSetColor(255,255,0);
    iText(250,h2,parr2[a].str3, GLUT_BITMAP_TIMES_ROMAN_24);
    printf("4 min %s\n",parr2[a].str3);
   printf(" 4 min %d\n",parr2[a].s);
    strcpy(pt2,itoa(parr2[a].s,pt,10));
         iSetColor(255,255,0);
    //     printf("%s\n",pt2);
        iText(400,h2,pt2, GLUT_BITMAP_TIMES_ROMAN_24);


    h2-=50;
   }
 h3=sheight*.80;


if(temp3==0){
        printf("Loading2");
        temp3++;

    fp=fopen("teno3.txt","r");
    fscanf(fp,"%d\n",&m3);
    fclose(fp);
        fp=fopen("myfile3.dat","rb");

   for(int a=0;a<m3;a++)
    {


         fread(&arr,sizeof(struct nabid),1,fp);
         parr3[a].s=arr.s;
          strcpy(parr3[a].str3,arr.str3);


    }

for(int a=0;a<m3;a++)
{
    for(int b=a+1;b<m3;b++)
    {
        if(parr3[a].s<parr3[b].s)
            swapi(&parr3[a],&parr3[b]);

    }
}
}
if(m3>10)
    m3=10;

   for(int a=0;a<m3;a++){
             iSetColor(155,100,25);
    iText(620,sheight*.90,"6 MIN",GLUT_BITMAP_HELVETICA_18);
    printf("6 min %s\n",parr3[a].str3);
             iSetColor(155,100,25);

    iText(620,h3,parr3[a].str3, GLUT_BITMAP_TIMES_ROMAN_24);
   printf("%d\n",parr3[a].s);

    strcpy(pt2,itoa(parr3[a].s,pt,10));
             iSetColor(155,100,25);
    //     printf("%s\n",pt2);

        iText(820,h3,pt2, GLUT_BITMAP_TIMES_ROMAN_24);


    h3-=50;
   }
   //free(parr);

}


