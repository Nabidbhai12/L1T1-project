
void score1()
{
    //printf("score xr %d yr %d\n",xr1,yr);
 for(int a=0;a<10;a++)
 {
     if(poseggx[a]!=-1){
     if((posbox+xr1>=poseggx[a] && posbox<=poseggx[a]) && (poseggy[a]>=0 && poseggy[a]<=yr)){
            //printf("socre increasing egg: %d posegg %d poseggy %d\n",a,poseggx[a],poseggy[a]);
     score+=1;
     poseggx[a]=-1;

   //  printf("score: hihihihihiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiiii             %d\n",score);
     }

     }
 }
 if(speggx!=-1){
    if((posbox+xr1>=speggx && posbox<=speggx) && (speggy>=0 && speggy<=yr))
      {

        score+=5;
        speggx=-1;
      }
 }
  if(dspeggx!=-1){
    if((posbox+xr1>=dspeggx && posbox<=dspeggx) && (dspeggy>=0 && dspeggy<=yr))
      {

        score+=10;
        dspeggx=-1;
      }
 }
 if(poopx!=-1){
    if((posbox+xr1>=poopx && posbox<=poopx) && (poopy>=0 && poopy<=yr))
      {

        score-=10;
        poopx=-1;
      }
 }
 if(lifex!=-1){
    if((posbox+xr1>=lifex && posbox<=lifex) && (lifey>=0 && lifey<=yr))
      {

        time2+=10*34;
        lifex=-1;
      }
 }

 if(foodx!=-1){
    if((posbox+xr1>=foodx && posbox<=foodx) && (foody>=0 && foody<=yr))
      {
         time3=170;
        //extraspeed=3;
        foodx=-1;
      }
 }
  if(bombx!=-1){
    if((posbox+xr1>=bombx && posbox<=bombx) && (bomby>=0 && bomby<=yr))
      {
         // printf("playy %d\n",play);
          play=0;
        over=1;
        foodx=-1;
      }
 }
  if(coinx!=-1){
    if((posbox<=coinx && posbox+xr1>=coinx) && (coiny>=0 && coiny<=yr))
      {
        cointime=200;
        xr1=400;
        yr=180;
                    //printf("score calling cointime %d\n",cointime);
coinx=-1;
      }
 }
}
void medium()
{
    if(fallrate==8){
    fallrate+=4;
    extraspeed+=5;
    bombfre=500;
    }
}
void hard()
{
    if(fallrate==12){
    fallrate+=4;
        extraspeed+=5;
        bombfre=400;

    }
}

void show_score()

{
//    printf("socre %d\n bg %d\n",score,vg);
    if((score>=0 && score<=30) || (score>=90 && score<=120) || (score>=200 && score<=300))
        vg=1;
    else if(((score>=30 && score<=60) || (score>=120 && score<=150) || (score>=300 && score<=500)))
        vg=2;
    else if((score>=60 && score<=90) || (score>=150 && score<=200) || (score>=500 && score<=1000))
        vg=3;
    else
        vg=1;
    if(score>=50 && score<=100)
    {
        medium();
    }
    if(score>=100)
    {
        hard();
    }

         //if(score>=100 && score<=200)
    // {
      //   vg=2;
        //          medium();

     //}
     //else if(score>=200)
     //{
       //  vg=3;
        // hard();
//}
   //  else
     //{
       //  vg=1;


     //}
    //char cur_score[100], buf[100];
    strcpy(cur_score,"YOUR SCORE: ");
    strcat(cur_score,itoa(score,buf,10));
    iSetColor(255,100,100);
    iText(20,sheight*0.90,cur_score, GLUT_BITMAP_TIMES_ROMAN_24);
}
void scorestore()
{
    int x;
    FILE *fp,*fp1;

    struct nabid ss;
    printf("hiiiiiiiiiiii\n");
    if(track1==1)
        {
    ss.s=score;
    strcpy(ss.str3,str2);
    fp1=fopen("teno1.txt","a+");
    fscanf(fp1,"%d",&x);
    fclose(fp1);
        fp1=fopen("teno1.txt","w");

    x++;
    fprintf(fp1,"%d\n",x);
    fclose(fp1);
    printf(" calling x %d\n",x);
    fp=fopen("myfile1.dat","ab+");
    printf("%d %s\n",ss.s,ss.str3);
        fwrite(&ss,sizeof(struct nabid),1,fp);


    fclose(fp);
    }
    else if(track2==1)
    {

    ss.s=score;
    strcpy(ss.str3,str2);
    fp1=fopen("teno2.txt","a+");
    fscanf(fp1,"%d",&x);
    fclose(fp1);
        fp1=fopen("teno2.txt","w");

    x++;
    fprintf(fp1,"%d\n",x);
    fclose(fp1);
    printf(" calling x %d\n",x);
    fp=fopen("myfile2.dat","ab+");
    printf("%d %s\n",ss.s,ss.str3);
        fwrite(&ss,sizeof(struct nabid),1,fp);
        fclose(fp);

    }
    else
    {
            ss.s=score;
    strcpy(ss.str3,str2);

    fp1=fopen("teno3.txt","a+");
    fscanf(fp1,"%d",&x);
    fclose(fp1);
        fp1=fopen("teno3.txt","w");

    x++;
    fprintf(fp1,"%d\n",x);
    fclose(fp1);
    printf(" calling x %d\n",x);
    fp=fopen("myfile3.dat","ab+");
    printf("%d %s\n",ss.s,ss.str3);
        fwrite(&ss,sizeof(struct nabid),1,fp);
        fclose(fp);

    }

}
void showhighscore()
{

}
