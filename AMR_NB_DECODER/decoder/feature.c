//
//#include <stdio.h>
//#define O 1999
//
//int eo(int sz[],float eoff[])
//{
//	int i=0,j=0,k=0;
//	int o=0,e=0;
//	//int eof[62]={0};
//	int eo0[18]={0};
//	int eo1[2]={0};//0偶数，1奇数，第一层
//	int eo2[4]={0};//0ee，1eo，2oe,3oo 第二层
//	int eo3[8]={0};//0eee,1eeo,2eoe,3eoo，第三层
//					//4oee,5oeo,6ooe,ooo
//	int eo4[16]={0};//0eeee,1eeeo,2eeoe,3eeoo，第四层
//				//4eoee,5eoeo,6eooe,7eooo
//				//8oeee,9oeeo,10oeoe,11oeoo
//				//12ooee,13ooeo,14oooe,15oooo
//	int eo5[32]={0};//0,eeeee,1eeeeo,2eeeoe,3eeeoo第五层
//				//4,eeoee,5eeoeo,6eeooe,7eeooo
//				//8,eoeee,9eoeeo,10eoeoe,11eoeoo
//				//12,eooee,13eooeo,14eoooe,15eoooo
//				//16,oeeee,17oeeeo,18oeeoe,19oeeoo
//				//20,oeoee,21oeoeo,22oeooe,23oeooo
//				//24,ooeee,25ooeeo,26ooeoe,27ooeoo
//				//28,oooee,29oooeo,30ooooe,31ooooo
//
//	for(i=0;i<1995;i++)
//	{
//		if(sz[i]%2==0)//e
//			{eo1[0]++;				
//				if(sz[i+1]%2==0)//ee
//				{eo2[0]++;
//					if(sz[i+2]%2==0)//eee
//					{eo3[0]++;
//						if(sz[i+3]%2==0)//eeee
//						{eo4[0]++;
//							if(sz[i+4]%2==0)//eeeee
//							{eo5[0]++;}
//							else if(sz[i+4]%2!=0)//eeeeo
//							{eo5[1]++;}
//						}
//						else if(sz[i+3]%2!=0)//eeoe
//						{eo4[1]++;
//							if(sz[i+4]%2==0)//eeeoe
//							{eo5[2]++;}
//							else if(sz[i+4]%2!=0)//eeeoo
//							{eo5[3]++;}
//						}
//					}
//					else if(sz[i+2]%2!=0)//eeo
//					{eo3[1]++;
//						if(sz[i+3]%2==0)//eeoe
//						{eo4[2]++;
//							if(sz[i+4]%2==0)//eeoee
//							{eo5[4]++;}
//							else if(sz[i+4]%2!=0)//eeoeo
//							{eo5[5]++;}
//						}
//						else if(sz[i+3]%2!=0)//eeoo
//						{eo4[3]++;
//							if(sz[i+4]%2==0)//eeooe
//							{eo5[6]++;}
//							else if(sz[i+4]%2!=0)//eeooo
//							{eo5[7]++;}
//						}
//					}
//
//				}
//				else if(sz[i+1]%2!=0)//eo
//				{eo2[1]++;
//					if(sz[i+2]%2==0)//eoe
//					{eo3[2]++;
//						if(sz[i+3]%2==0)//eoee
//						{eo4[4]++;
//							if(sz[i+4]%2==0)//eoeee
//							{eo5[8]++;}
//							else if(sz[i+4]%2!=0)//eoeeo
//							{eo5[9]++;}
//						}
//						else if(sz[i+3]%2!=0)//eooe
//						{eo4[5]++;
//							if(sz[i+4]%2==0)//eoeoe
//							{eo5[10]++;}
//							else if(sz[i+4]%2!=0)//eoeoo
//							{eo5[11]++;}
//						}
//					}
//					else if(sz[i+2]%2!=0)//eoo
//					{eo3[3]++;
//						if(sz[i+3]%2==0)//eooe
//						{eo4[6]++;
//							if(sz[i+4]%2==0)//eooee
//							{eo5[12]++;}
//							else if(sz[i+4]%2!=0)//eooeo
//							{eo5[13]++;}
//						}
//						else if(sz[i+3]%2!=0)//eooo
//						{eo4[7]++;
//							if(sz[i+4]%2==0)//eoooe
//							{eo5[14]++;}
//							else if(sz[i+4]%2!=0)//eoooo
//							{eo5[15]++;}
//						}
//					}
//
//				}
//				
//			}
//		else if(sz[i]%2!=0)//o
//			{eo1[1]++;				
//				if(sz[i+1]%2==0)//oe
//				{eo2[2]++;
//					if(sz[i+2]%2==0)//oee
//					{eo3[4]++;
//						if(sz[i+3]%2==0)//oeee
//						{eo4[8]++;
//							if(sz[i+4]%2==0)//oeeee
//							{eo5[16]++;}
//							else if(sz[i+4]%2!=0)//oeeeo
//							{eo5[17]++;}
//						}
//						else if(sz[i+3]%2!=0)//oeoe
//						{eo4[9]++;
//							if(sz[i+4]%2==0)//oeeoe
//							{eo5[18]++;}
//							else if(sz[i+4]%2!=0)//oeeoo
//							{eo5[19]++;}
//						}
//					}
//					else if(sz[i+2]%2!=0)//oeo
//					{eo3[5]++;
//						if(sz[i+3]%2==0)//oeoe
//						{eo4[10]++;
//							if(sz[i+4]%2==0)//oeoee
//							{eo5[20]++;}
//							else if(sz[i+4]%2!=0)//oeoeo
//							{eo5[21]++;}
//						}
//						else if(sz[i+3]%2!=0)//oeoo
//						{eo4[11]++;
//							if(sz[i+4]%2==0)//oeooe
//							{eo5[22]++;}
//							else if(sz[i+4]%2!=0)//oeooo
//							{eo5[23]++;}
//						}
//					}
//
//				}
//				else if(sz[i+1]%2!=0)//oo
//				{eo2[3]++;
//					if(sz[i+2]%2==0)//ooe
//					{eo3[6]++;
//						if(sz[i+3]%2==0)//ooee
//						{eo4[12]++;
//							if(sz[i+4]%2==0)//ooeee
//							{eo5[24]++;}
//							else if(sz[i+4]%2!=0)//ooeeo
//							{eo5[25]++;}
//						}
//						else if(sz[i+3]%2!=0)//oooe
//						{eo4[13]++;
//							if(sz[i+4]%2==0)//ooeoe
//							{eo5[26]++;}
//							else if(sz[i+4]%2!=0)//ooeoo
//							{eo5[27]++;}
//						}
//					}
//					else if(sz[i+2]%2!=0)//ooo
//					{eo3[7]++;
//						if(sz[i+3]%2==0)//oooe
//						{eo4[14]++;
//							if(sz[i+4]%2==0)//oooee
//							{eo5[28]++;}
//							else if(sz[i+4]%2!=0)//oooeo
//							{eo5[29]++;}
//						}
//						else if(sz[i+3]%2!=0)//oooo
//						{eo4[15]++;
//							if(sz[i+4]%2==0)//ooooe
//							{eo5[30]++;}
//							else if(sz[i+4]%2!=0)//ooooo
//							{eo5[31]++;}
//						}
//					}
//
//				}
//				
//			}		
//	}
//
//	
//	//给数组赋值
//	for(i=0;i<2;i++){eoff[i]=(float)eo2[i*2]/(float)eo1[i];}//出现奇数（偶数）后再出现奇数（偶数）的概率
//	for(i=2,j=0;i<6;i++){eoff[i]=(float)eo3[j]/(float)eo2[j/2];j=j+2;}
//	for(i=6,j=0;i<14;i++){eoff[i]=(float)eo4[j]/(float)eo3[j/2];j=j+2;}
//	for(i=14,j=0;i<30;i++){eoff[i]=(float)eo5[j]/(float)eo4[j/2];j=j+2;}
//	return 0;
//}	
//
//
//int msdpd(int sz[] ,float  MSDPD[]){	
//static int so[O];//二阶差分
//	int i=0,j=0,k=0,l=0;
//	int ms[13]={0};//门限【-6，6】
//	int zy[13][13]={0};//169维特征值
//	for(i=0;i<1998;i++)so[i]=sz[i+2]-2*sz[i+1]+sz[i];//计算二阶差分
//	for(j=0;j<1998;j++)
//	{
//		for(i=-6;i<7;i++)
//		{
//			if(so[j]==i)
//			{ms[i+6]++;}
//		}	
//	}//计算[-6,6]出现的次数
//	printf("ms[i+6]的值\n");
//	for(i=0;i<13;i++)printf("%d\t",ms[i]);//输出次数			
//	printf("\n");
//
//	for(i=0;i<1998;i++)
//	{
//		for(l=-6;l<7;l++)
//		{
//			for(k=-6;k<7;k++)
//			{
//				if((so[i]==l)&&(so[i+1]==k))zy[l+6][k+6]++;
//			}
//		}
//				
//	}//在出现门限数据之后再出现门限的次数
//	k=0;
//	for(i=0;i<13;i++)
//	{
//		for(j=0;j<13;j++)
//		{
//			MSDPD[k]=(float)zy[i][j]/(float)ms[i];			
//			k++;
//		}
//	}	
//	return 0;
//}
//
//





#include <stdio.h>
#define O 1999
#define N 2000
#define PD 1000

int eo(int sz[],float eoff[])
{
	int i=0,j=0,k=0;
	int o=0,e=0;
	//int eof[62]={0};
	int eo0[16]={0};
	int eo1[2]={0};//0偶数，1奇数，第一层
	int eo2[4]={0};//0ee，1eo，2oe,3oo 第二层
	int eo3[8]={0};//0eee,1eeo,2eoe,3eoo，第三层
					//4oee,5oeo,6ooe,ooo
	int eo4[16]={0};//0eeee,1eeeo,2eeoe,3eeoo，第四层
				//4eoee,5eoeo,6eooe,7eooo
				//8oeee,9oeeo,10oeoe,11oeoo
				//12ooee,13ooeo,14oooe,15oooo
	int eo5[32]={0};//0,eeeee,1eeeeo,2eeeoe,3eeeoo第五层
				//4,eeoee,5eeoeo,6eeooe,7eeooo
				//8,eoeee,9eoeeo,10eoeoe,11eoeoo
				//12,eooee,13eooeo,14eoooe,15eoooo
				//16,oeeee,17oeeeo,18oeeoe,19oeeoo
				//20,oeoee,21oeoeo,22oeooe,23oeooo
				//24,ooeee,25ooeeo,26ooeoe,27ooeoo
				//28,oooee,29oooeo,30ooooe,31ooooo
	for(i=0,k=0;i<1998;i++,k++)
	{		
		if(k==4)k=0;
		if(k%2==0&&sz[i]%2==0){eo0[0]++;if(sz[i+1]%2==0)eo0[1]++;}
		else if(k%2!=0&&sz[i]%2!=0){eo0[2]++;if(sz[i+1]%2!=0)eo0[3]++;}

		if(k==0&&sz[i]%2==0){eo0[4]++;if(sz[i+2]%2==0)eo0[5]++;}
		else if(k==0&&sz[i]%2!=0){eo0[6]++;if(sz[i+2]%2!=0)eo0[7]++;}

		if(k==1&&sz[i]%2==0){eo0[8]++;if(sz[i+2]%2==0)eo0[9]++;}
		else if(k==1&&sz[i]%2!=0){eo0[10]++;if(sz[i+2]%2!=0)eo0[11]++;}

		if(i%4==0&&sz[i]%2==0){eo0[12]++;if(sz[i+4]%2==0)eo0[13]++;}
		else if(i%4==0&&sz[i]%2!=0){eo0[14]++;if(sz[i+4]%2!=0)eo0[15]++;}
	}
	for(i=0;i<1995;i++)
	{
		if(sz[i]%2==0)//e
			{eo1[0]++;				
				if(sz[i+1]%2==0)//ee
				{eo2[0]++;
					if(sz[i+2]%2==0)//eee
					{eo3[0]++;
						if(sz[i+3]%2==0)//eeee
						{eo4[0]++;
							if(sz[i+4]%2==0)//eeeee
							{eo5[0]++;}
							else if(sz[i+4]%2!=0)//eeeeo
							{eo5[1]++;}
						}
						else if(sz[i+3]%2!=0)//eeoe
						{eo4[1]++;
							if(sz[i+4]%2==0)//eeeoe
							{eo5[2]++;}
							else if(sz[i+4]%2!=0)//eeeoo
							{eo5[3]++;}
						}
					}
					else if(sz[i+2]%2!=0)//eeo
					{eo3[1]++;
						if(sz[i+3]%2==0)//eeoe
						{eo4[2]++;
							if(sz[i+4]%2==0)//eeoee
							{eo5[4]++;}
							else if(sz[i+4]%2!=0)//eeoeo
							{eo5[5]++;}
						}
						else if(sz[i+3]%2!=0)//eeoo
						{eo4[3]++;
							if(sz[i+4]%2==0)//eeooe
							{eo5[6]++;}
							else if(sz[i+4]%2!=0)//eeooo
							{eo5[7]++;}
						}
					}

				}
				else if(sz[i+1]%2!=0)//eo
				{eo2[1]++;
					if(sz[i+2]%2==0)//eoe
					{eo3[2]++;
						if(sz[i+3]%2==0)//eoee
						{eo4[4]++;
							if(sz[i+4]%2==0)//eoeee
							{eo5[8]++;}
							else if(sz[i+4]%2!=0)//eoeeo
							{eo5[9]++;}
						}
						else if(sz[i+3]%2!=0)//eooe
						{eo4[5]++;
							if(sz[i+4]%2==0)//eoeoe
							{eo5[10]++;}
							else if(sz[i+4]%2!=0)//eoeoo
							{eo5[11]++;}
						}
					}
					else if(sz[i+2]%2!=0)//eoo
					{eo3[3]++;
						if(sz[i+3]%2==0)//eooe
						{eo4[6]++;
							if(sz[i+4]%2==0)//eooee
							{eo5[12]++;}
							else if(sz[i+4]%2!=0)//eooeo
							{eo5[13]++;}
						}
						else if(sz[i+3]%2!=0)//eooo
						{eo4[7]++;
							if(sz[i+4]%2==0)//eoooe
							{eo5[14]++;}
							else if(sz[i+4]%2!=0)//eoooo
							{eo5[15]++;}
						}
					}

				}
				
			}
		else if(sz[i]%2!=0)//o
			{eo1[1]++;				
				if(sz[i+1]%2==0)//oe
				{eo2[2]++;
					if(sz[i+2]%2==0)//oee
					{eo3[4]++;
						if(sz[i+3]%2==0)//oeee
						{eo4[8]++;
							if(sz[i+4]%2==0)//oeeee
							{eo5[16]++;}
							else if(sz[i+4]%2!=0)//oeeeo
							{eo5[17]++;}
						}
						else if(sz[i+3]%2!=0)//oeoe
						{eo4[9]++;
							if(sz[i+4]%2==0)//oeeoe
							{eo5[18]++;}
							else if(sz[i+4]%2!=0)//oeeoo
							{eo5[19]++;}
						}
					}
					else if(sz[i+2]%2!=0)//oeo
					{eo3[5]++;
						if(sz[i+3]%2==0)//oeoe
						{eo4[10]++;
							if(sz[i+4]%2==0)//oeoee
							{eo5[20]++;}
							else if(sz[i+4]%2!=0)//oeoeo
							{eo5[21]++;}
						}
						else if(sz[i+3]%2!=0)//oeoo
						{eo4[11]++;
							if(sz[i+4]%2==0)//oeooe
							{eo5[22]++;}
							else if(sz[i+4]%2!=0)//oeooo
							{eo5[23]++;}
						}
					}

				}
				else if(sz[i+1]%2!=0)//oo
				{eo2[3]++;
					if(sz[i+2]%2==0)//ooe
					{eo3[6]++;
						if(sz[i+3]%2==0)//ooee
						{eo4[12]++;
							if(sz[i+4]%2==0)//ooeee
							{eo5[24]++;}
							else if(sz[i+4]%2!=0)//ooeeo
							{eo5[25]++;}
						}
						else if(sz[i+3]%2!=0)//oooe
						{eo4[13]++;
							if(sz[i+4]%2==0)//ooeoe
							{eo5[26]++;}
							else if(sz[i+4]%2!=0)//ooeoo
							{eo5[27]++;}
						}
					}
					else if(sz[i+2]%2!=0)//ooo
					{eo3[7]++;
						if(sz[i+3]%2==0)//oooe
						{eo4[14]++;
							if(sz[i+4]%2==0)//oooee
							{eo5[28]++;}
							else if(sz[i+4]%2!=0)//oooeo
							{eo5[29]++;}
						}
						else if(sz[i+3]%2!=0)//oooo
						{eo4[15]++;
							if(sz[i+4]%2==0)//ooooe
							{eo5[30]++;}
							else if(sz[i+4]%2!=0)//ooooo
							{eo5[31]++;}
						}
					}

				}
				
			}		
	}

	
	//给数组赋值
	for(i=0;i<2;i++){eoff[i]=(float)eo2[i*2]/(float)eo1[i];}//出现奇数（偶数）后再出现奇数（偶数）的概率
	for(i=2,j=0;i<6;i++){eoff[i]=(float)eo3[j]/(float)eo2[j/2];j=j+2;}
	for(i=6,j=0;i<14;i++){eoff[i]=(float)eo4[j]/(float)eo3[j/2];j=j+2;}
	for(i=14,j=0;i<30;i++){eoff[i]=(float)eo5[j]/(float)eo4[j/2];j=j+2;}
	for(i=30,j=1;i<38;i++){eoff[i]=(float)eo0[j]/(float)eo0[j-1];j=j+2;}
	return 0;
}	
int msdpd(int sz[] ,float  MSDPD[]){	
	static int so[O];//二阶差分
	int i=0,j=0,k=0,l=0;
	int ms[13]={0};//门限【-6，6】
	int zy[13][13]={0};//169维特征值
	for(i=0;i<1998;i++)so[i]=sz[i+2]-2*sz[i+1]+sz[i];//计算二阶差分
	for(j=0;j<1998;j++)
	{
		for(i=-6;i<7;i++)
		{
			if(so[j]==i)
			{ms[i+6]++;}
		}	
	}//计算[-6,6]出现的次数
	printf("ms[i+6]的值\n");
	for(i=0;i<13;i++)printf("%d\t",ms[i]);//输出次数			
	printf("\n");

	for(i=0;i<1998;i++)
	{
		for(l=-6;l<7;l++)
		{
			for(k=-6;k<7;k++)
			{
				if((so[i]==l)&&(so[i+1]==k))zy[l+6][k+6]++;
			}
		}
				
	}//在出现门限数据之后再出现门限的次数
	k=0;
	for(i=0;i<13;i++)
	{
		for(j=0;j<13;j++)
		{
			MSDPD[k]=(float)zy[i][j]/(float)ms[i];			
			k++;
		}
	}	
	return 0;
}
int pddpd(int sz[],float DPD[])
{
	int i=0,j=0,k=0,p=0;
	int pd[10]={0};
	int pdd[10][10]={0};
	int sz_c[1000]={0};

	//相同组内的差值
	for(i=0;i<1999;i++)
		if(i%2==0)
			sz_c[i/2]=sz[i]-sz[i+1];
	//差值在[-4,5]内的分布
	for(i=0;i<1000;i++)
		for(j=-4;j<6;j++)
			if(sz_c[i]==j)pd[j+4]++;

	//计算10维特征
	for(i=0;i<10;i++)
		{
			DPD[i]=(float)pd[i]/(float)N;
			printf("%f\t",DPD[i]);
			if(i==9)printf("\n");
		}

	//相同组的马尔科夫转移矩阵
	for(i=0;i<999;i++)
		for(k=-4;k<6;k++)
			for(p=-4;p<6;p++)
				if((sz_c[i]==k)&&(sz_c[i+1]==p))pdd[k+4][p+4]++;
	//100维特征			
	for(i=0,k=10;i<10;i++)
		for(j=0;j<10;j++,k++)
			DPD[k]=(float)pdd[i][j]/(float)pd[i];
	printf("吴彦鹏的特征的维度是：%d\n",k);

	return 0;
}


	 







