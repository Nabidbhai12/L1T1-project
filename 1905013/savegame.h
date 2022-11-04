void savegame()
{
        y++;

    if(y==1){
    yy=0;
    printf("saving file\n");
FILE *fp;
fp=fopen("file1.txt","w");
    for(int a=0;a<10;a++)
    {
        fprintf(fp,"%d %d\n",poseggx[a],poseggy[a]);
        printf("a=%d pseegg %d %d\n",a,poseggx[a],poseggy[a]);
    }

    fclose(fp);
  fp=fopen("file2.txt","w");
          fprintf(fp,"%d %d %d %d %d\n",poshen,posbox,score,cou,pre);

              printf("poshen %d %d\n",poshen,posbox);

    fclose(fp);
      fp=fopen("file3.txt","w");
          fprintf(fp,"%d %d %d %d %d\n",eggcount,speggx,speggy,dspeggx,dspeggy);
fclose(fp);
fp=fopen("file4.txt","w");
         fprintf(fp,"%d %d %d %d %d\n",poopx,poopy,lifex,lifey,bombx);
         fclose(fp);
         fp=fopen("file5.txt","w");
         fprintf(fp,"%d %d\n",bomby,time2);
         fclose(fp);
            fp=fopen("file6.txt","w");
         fprintf(fp,"%d %d %d %d %d %d %d %d\n",coinx,coiny,cdpos,foodx,foody,vg,xr1,yr);
         fclose(fp);
                  fp=fopen("file7.txt","w");
         fprintf(fp,"%d %d %d %d\n",time4,fallrate,extraspeed,bombfre);
         fclose(fp);
}
}
void loadgame()
{
    yy++;
    if(yy==1){
            y=0;
FILE *fp;
printf("loading\n");
fp=fopen("file1.txt","r");
    for(int a=0;a<10;a++)
    {
        fscanf(fp,"%d %d\n",&poseggx[a],&poseggy[a]);
        printf("%d %d\n",poseggx[a],poseggy[a]);
    }

    fclose(fp);
    fp=fopen("file4.txt","r");
         fscanf(fp,"%d %d %d %d\n",&poopx,&poopy,&lifex,&lifey,&bombx);
         fclose(fp);
  fp=fopen("file2.txt","r");
          fscanf(fp,"%d %d %d %d %d\n",&poshen,&posbox,&score,&cou,&pre);

              printf("%d %d %d\n",poshen,posbox,score);

    fclose(fp);
      fp=fopen("file3.txt","r");
          fscanf(fp,"%d %d %d %d %d\n",&eggcount,&speggx,&speggy,&dspeggx,&dspeggy);
                        printf("%d %d\n",eggcount,speggy);

fclose(fp);
    fp=fopen("file5.txt","r");
         fscanf(fp,"%d %d\n",&bomby,&time2);
         fclose(fp);
               fp=fopen("file6.txt","r");
         fscanf(fp,"%d %d %d %d %d %d %d %d\n",&coinx,&coiny,&cdpos,&foodx,&foody,&vg,&xr1,&yr);
         fclose(fp);
                           fp=fopen("file7.txt","w");
                                    fscanf(fp,"%d %d %d %d\n",&time4,&fallrate,&extraspeed,&bombfre);

         fclose(fp);

         //printf("finished\n");
         return;
}
}
