#include<iostream>
#include<fstream>
#include<bits/stdc++.h>
#include<dos.h>
using namespace std;

int execute();

int memdisp(int,int,int,int);

int intro();

int menu(int,int,int,int);

int addpay(int,int,int,int);

int viewpay(int,int,int,int);

int debts(int,int,int,int);

int summary(int,int,int,int);

void combinationUtil(int arrr[], int data[], int start, int end, 
					int index, int r_1);

void printCombination(int arrr[], int q, int r_1)
{
	// A temporary array to store all combination one by one
	int data[r_1];

	// Print all combination using temprary array 'data[]'
	combinationUtil(arrr, data, 0, q-1, 0, r_1);
}
//int check();
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
FILE *fp_1;
FILE *fp_2;
		
		char str[25];
		char str_temp1[25];
		char str_temp2[25];
		char str_temp3[25];
		char str_temp4[25];
		char str_temp5[25];
		char str_temp[25];
		
		int no;
		
		char tstr[50][25];
		int tno,i,j;
		int arr[50];
		char mem[50][25],arr_1[10][10];
		int giv[15];
		int spent[15];
		int total[15];
		
		int current=0;
		int counti=0;
		int choice;
		int parr[10][10];
		int par[200];
		int val=0;
		int debch=0;
		int mark[101]={0};
		int r_1;
		int csum=0;
		int temp_21;
		int temp_22,k,l,a,b,c;
		struct oye
		{
			char namef[25];
			int amt;
		}ar[10];

void combinationUtil(int arrr[], int data[], int start, int end,
					int index, int r)
{
	csum=0;
	// Current combination is ready to be printed, print it
	if (index == r)
	{
		for (temp_21=0; temp_21<r; temp_21++)
		{
			csum+=data[temp_21];
		}
		if(csum==0)
		{
		printf("\n");
		for(temp_21=0;temp_21<r;temp_21++)
		{
			printf("%d ", data[temp_21]);
		for(temp_22=0;temp_22<end;temp_22++)
		{
			if(data[temp_21]==arrr[temp_22])
			{
				arrr[temp_22]=-999999;
				break;
			}
		}
	}
	//printf("\n");
		return;
	}
}

	for (int i=start; i<=end && end-i+1 >= r-index; i++)
	{
	//	printf("Value of i here %d\n",i);
		if(arrr[i]!=-999999)
		{
		//printf("Value of i here %d\n",i);
		data[index] = arrr[i];
		combinationUtil(arrr, data, i+1, end, index+1, r);
			}
	}

}

int intro()
{
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n");
	printf("| #    # #### #    #### #### #     # #####|\n");
	printf("| #    # #    #    #    #  # # # # # #    |\n");
	printf("| # ## # #### #    #    #  # #  #  # #### |\n");
	printf("| ##  ## #    #    #    #  # #     # #    |\n");
	printf("| #    # #### #### #### #### #     # #####|\n");
	printf("--------------------------------------------\n");
	printf("--------------------------------------------\n\n");
   
   
   printf("SETTLE UP PROJECT\n");
   
   printf("CODEX PRODUCTION BY :\n");
   
   printf("NIKUNJ GOEL\n");
   printf("ENROLLMENT NO- 14104056\n");
   
   printf("SHREYA MISRA\n");
   printf("ENROLLMENT NO- 14104058\n");
   
   printf("VASUNDHARA SINGH\n");
   printf("ENROLLMENT NO- 14104051\n");
   
   printf("SAURAV SINGH\n");
   printf("ENROLLMENT NO- 14104046\n");
   
   return 0;
}
int grpcrt()
	{
		//count=0;
		
		fp_1=fopen("Groups.txt","a");
		cout<<"Enter Name of the group"<<endl;
		cout<<"Name of the group should not be 'Group'\nor 'Members' program will not work correctly"<<endl;
		
		cin>>str;
		
		cout<<"Number of members should not exceed 10 members"<<endl;
		cout<<"Enter Number of people"<<endl;
		
		cin>>no;
		
		
		strcpy(str_temp,str);
		strcat(str_temp,".txt");
		
		fp_2=fopen(str_temp,"w");
		
		for(i=0;i<no*no;i++)
		{
			fprintf(fp_2,"%d\n",val);
		}
		fclose(fp_2);
		
	
		//cout<<str<<endl;
		
		strcpy(str_temp,str);
		strcat(str_temp,"pay.txt");
		
		fp_2=fopen(str_temp,"w");
		
		fclose(fp_2);
		
		strcpy(str_temp,str);
		strcat(str_temp,"sum.txt");
		
		fp_2=fopen(str_temp,"w");
		
		fclose(fp_2);
	
			fprintf(fp_1,"%s %d\n",str,no);		
		
			fclose(fp_1);
		
			fp_1=fopen("Members.txt","a");
		
			cout<<"Enter name of the Group members"<<endl;
		
			for(i=1;i<=no;i++)
			{
			cin>>str;
			fprintf(fp_1,"%s\n",str);	
			}
			
			cout<<"Redirecting you to main menu";
			
			for(i=1;i<=5;i++)
			{
				for(j=1;j<=99999999;j=j+1)
				{
				}
				cout<<".";
				//delay(100);
			}
			
			fclose(fp_1);
			
			execute();
		
		return 0;
	}
	
	
	int grpdisp()
	{
		counti=0;
		int o_2;
	
		fp_1=fopen("Groups.txt","r");
		cout<<"Group name are as follows"<<endl;
	
		o_2=0;
	
		while(fscanf(fp_1,"%s %d\n",tstr[o_2],&arr[o_2])!=EOF)
			{
				cout<<tstr[o_2]<<" "<<arr[o_2]<<endl;
			o_2++;
			}
			fclose(fp_1);
			j=o_2;
	
			cout<<"Enter the name of the group you want to select"<<endl;
			cout<<"Note-Case Sensitive"<<endl;
	
			cin>>str;
	
			for(i=0;i<j;i++)
			{
				if(strcmp(tstr[i],str)==0)
				{
					current=arr[i];
				break;
			}
				else
				{
				counti+=arr[i];
			}
			}
	
			cout<<"Group Selected is '"<<tstr[i]<<"'"<<endl;
	
			memdisp(current,counti,i,j);
	
		return 0;
	
	}

int memdisp(int q,int w,int r,int y)
{
	//cout<<q<<" "<<w<<endl;
	int o_1;

	cout<<"Name of the Members are :-"<<endl;

	fp_1=fopen("Members.txt","r");
	o_1=0;

	while(fscanf(fp_1,"%s\n",mem[o_1])!=EOF)
	{
     o_1++;
 }

 fclose(fp_1);

	for(i=w;i<w+q;i++)
	{
		cout<<mem[i]<<endl;
	}

	cout<<"Do want to continue with the selection"<<endl;
	cout<<"If YES Press 1"<<endl;
	cout<<"Else Press 2 to select another Group"<<endl;
	cout<<"Pressing 3 will exit the program"<<endl;

	cin>>choice;


	if(choice==1)
	{

		cout<<"Redirecting to 'SettleUp' main menu"<<endl;

			for(i=1;i<=5;i++)
			{

				for(j=1;j<=99999999;j=j+1)
				{
				}
				cout<<".";
				//delay(100);
			}
			menu(q,w,r,y);
	}

	else if(choice==2)
	{

		grpdisp();

	}
	else
	{
		//cout<<"Choose A valid Input"<<endl;
	}
	return 0;
}
int execute()
{

	int temp_1;

	cout<<"\nPress 1 to create a New Group"<<endl;
	cout<<"Press 2 to Display Groups"<<endl;

	cin>>temp_1;

	switch(temp_1)
	{
		case 1:
			grpcrt();
			break;

			case 2:
				grpdisp();
				break;

				default:
					cout<<"You Have not given a desired Input";

					execute();

				}

				return 0;
	
	}
		/*int check()
	{
		cin>>str;
		strcat(str,".txt");
		fp_1=fopen(str,"w");
		if(fp_1==0)
		cout<<"File Cant be opened"<<endl;
		else
		cout<<"File can be opened"<<endl;
	}*/
	int in_1,in_2,in_3;
	
	int temp_4;
	int temp_5;
	int temp_6;
	int temp_7;
	int temp_8;
	int temp_9;
	int temp_10;
	int temp_11;

int addpay(int q,int w,int r,int y)
{
 FILE *fp_3;	
	cout<<"\nEnter name of the person who have paid"<<endl;
	
	cin>>str_temp1;
	
	 for(i=w;i<w+q;i++)
	 {
	 	if(strcmp(mem[i],str_temp1)==0)
	 	{
	
	 		in_1=i;
	 		in_1=in_1-w;
	 		break;
	
		 }
	
	 }
	 
	 //cout<<"Index of the person who paid"<<in_1<<endl;
	 
	 cout<<"Enter the purpose Of payment"<<endl;
	 cin>>str_temp4;
	 //cout<<in_1<<endl;
	 cout<<"Enter The number of Members\nFor which payment has to be made\nItself payment has to be included."<<endl;
	 
	 cin>>temp_4;
	 
	 strcpy(str_temp2,tstr[r]);
	 strcat(str_temp2,"pay.txt");
	
	 fp_3=fopen(str_temp2,"a");
	
	 fprintf(fp_3,"%s %s %d\n",str_temp1,str_temp4,temp_4);
	 
	 strcpy(str_temp5,tstr[r]);
	 strcat(str_temp5,".txt");
	
	 fp_1=fopen(str_temp5,"r");
	 temp_6=0;
	 temp_7=0;
	 while(fscanf(fp_1,"%d\n",&par[temp_6])!=EOF)
	 {
	 //cout<<par[temp_6]<<endl;
	 temp_6++;
	 }
	 //cout<<"Values initially"<<endl;
	 temp_11=0;
	 for(i=0;i<q;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		parr[i][j]=par[temp_11++];
	 //		cout<<parr[i][j]<<" ";
		 }
	//	 cout<<endl;
	 }
	 
	 fclose(fp_1);
	
	 for(i=0;i<temp_4;i++)
	 {
	 	cout<<"Name of The Member"<<endl;
	 	cin>>str_temp1;
	 	cout<<"Amount Paid"<<endl;
	 	cin>>temp_5;
	 	fprintf(fp_3,"%s %d\n",str_temp1,temp_5);
	 	for(j=w;j<w+q;j++)
	 {
	 	if(strcmp(mem[j],str_temp1)==0)
	 	{
	
	 		in_2=j;
	 		in_2=in_2-w;
	 		break;
	
		 }
	
	 }
	 
	 parr[in_1][in_2]=parr[in_1][in_2]+temp_5;
}
	 fclose(fp_3);
	
	 strcpy(str_temp2,tstr[r]);
	
	 strcat(str_temp2,".txt");
	 fp_1=fopen(str_temp2,"w");
	 for(temp_8=0;temp_8<q;temp_8++)
	 {
	 	for(temp_9=0;temp_9<q;temp_9++)
	 	{
	 		fprintf(fp_1,"%d\n",parr[temp_8][temp_9]);
		 }
	 }
	 fclose(fp_1);
	 
	 cout<<"Do want to add another payment.?"<<endl;
	 cout<<"If YES enter 1"<<endl;
	 cout<<"Else 2 for menu"<<endl;
	
	 cin>>temp_8;
	
	 if(temp_8==1)
	 {
	 	addpay(q,w,r,y);
	 }
	 else
	 {
	 	menu(q,w,r,y);
	 }
	return 0;
}
int viewpay(int q,int w,int r,int y)
{
	FILE *fp_4;
	int c;
	
		strcpy(str_temp,tstr[r]);
		
		strcat(str_temp,"pay.txt");
		
		fp_4=fopen(str_temp,"r");
	
	
	while(fscanf(fp_4,"%s %s %d\n",str_temp1,str_temp3,&temp_4)!=EOF)
	{
	
		cout<<"Person who paid ->"<<str_temp1<<endl;
	
		cout<<"No of members for whom amount was paid ->"<<temp_4<<endl;
    
	    cout<<"Purpose of payment "<<str_temp3<<endl;
	
		for(i=0;i<temp_4;i++)
		{
			fscanf(fp_4,"%s %d\n",str_temp,&c);
		
		cout<<"Name Of the member for whom amount was paid ->"<<str_temp<<endl;
		cout<<"Amount Paid is ->"<<c<<endl;
	
	}
}
	
		fclose(fp_4);
	cout<<"Press 1 if you want to go to Settle up Menu"<<endl;
	cout<<"Press 2 if you want to view payment again"<<endl;
	cout<<"Press 3 if you want to Select another Group"<<endl;
	
	cin>>temp_5;
	
	if(temp_5==1)
	{
	
		menu(q,w,r,y);
	
		}	
	else if(temp_5==2)
	{
		
		viewpay(q,w,r,y);
	}
	else if(temp_5==3)
	{
		grpdisp();
	}
	
else

	{

		cout<<"User has given a wrong Input \nExiting program"<<endl;

	}
		
	return 0;
}

int debts(int q,int w,int r,int y)
{
 	cout<<"Press 1 to display debts without Algo"<<endl;
 	cout<<"Press 2 to display debts with Algo"<<endl;
 	cout<<"Press 3 for Settleup Menu"<<endl;
	
	cin>>debch;
 	
	 if(debch==1)
 	{
 			strcpy(str_temp5,tstr[r]);
	 strcat(str_temp5,".txt");
	temp_6=0;
	 fp_1=fopen(str_temp5,"r");
	 while(fscanf(fp_1,"%d\n",&par[temp_6])!=EOF)
	 {
	 //cout<<par[temp_6]<<endl;
	 temp_6++;
	 }
	 //cout<<"Values initially"<<endl;
	 temp_11=0;
	 for(i=0;i<q;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		parr[i][j]=par[temp_11++];
	 		cout<<parr[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	 fclose(fp_1);
 	
          for(k=0;k<q;k++)
             {
             for(l=0;l<q;l++)
                {
              if(k!=l && parr[k][l]!=-1)
               {
                 a=parr[k][l];
               // cout<<"a is "<<a<<endl;
                 b=parr[l][k];
               //  cout<<"b is "<<b<<endl;
                 parr[k][l]=-1;
                 parr[l][k]=-1;
                 
                 c=a-b;
                // cout<<"c is "<<c<<endl;
                 if(c>0)
                  {
                   cout<<mem[w+l]<<" has to pay "<<mem[w+k]<<" "<<abs(c)<<endl;
                  }
                 else if(c<0)
                  {
                  cout<<mem[w+k]<<" has to pay "<<mem[w+l]<<" "<<abs(c)<<endl;
                  }
                  
                  else{
                  	
				  }
                }

            }
        }
    }
    
	 	
	
	 
	 else if(debch==2)
	 {
	 for(i=0;i<q;i++)
	 {
	 	ar[i].amt=total[i];
	 	strcpy(ar[i].namef,mem[w+i]);
	 	//cout<<ar[i].namef<<" "<<ar[i].amt<<endl;  to check all the values are accurate
	 }
	 for(r_1=2;r_1<=q;r_1++)
	 printCombination(total,q,r_1);
	/* int a1,a2,a3,a4,a5,a6;
	 for(a1=0;a1<q;a1++)
	 {
	 	for(a2=a1+1;a2<q;a2++)
	 	{
	 		//cout<<"Pair of 2"<<ar[a1].namef<<" "<<ar[a2].namef<<endl;
	 		cout<<"Pair of 2"<<ar[a1].amt<<" "<<ar[a2].amt<<endl;
	 		int x1=ar[a1].amt+ar[a2].amt;
	 		if(x1==0 && mark[a1]==0 && mark[a2]==0 )    
	 		{
	 			
	 			cout<<"cool"<<endl;
	 			mark[a1]=1;
				  mark[a2]=1;
			 }
	 		for(a3=a2+1;a3<q;a3++)
	 		{
	 			
	 		//		cout<<"Pair of 3"<<ar[a1].namef<<" "<<ar[a2].namef<<" "<<ar[a3].namef<<endl;
	 			cout<<"Pair of 3"<<ar[a1].amt<<" "<<ar[a2].amt<<" "<<ar[a3].amt<<endl;
	 				int x2=ar[a1].amt+ar[a2].amt+ar[a3].amt;
	 		if(x2==0 && mark[a1]==0 && mark[a2]==0 && mark[a3]==0 )
	 		{
	 			cout<<"cool"<<endl;
	 			mark[a1]=1;  mark[a2]=1 ; mark[a3]=1; 
			 }
			 for(a4=a3+1;a4<q;a4++)
			 {
			 		cout<<"Pair of 4"<<ar[a1].amt<<" "<<ar[a2].amt<<" "<<ar[a3].amt<<" "<<ar[a4].amt<<endl;
	 				int x2=ar[a1].amt+ar[a2].amt+ar[a3].amt+ar[a4].amt;
	 		if(x2==0 && mark[a1]==0 && mark[a2]==0 && mark[a3]==0 &&  mark[a4]==0)
	 		{
	 			cout<<"cool"<<endl;
	 			mark[a1]=1 ; mark[a2]=1 ; mark[a3]=1;   mark[a4]=1;
			 }
			 }
			 }
		 }
	 }*/
	 
	 }
	 else if(debch==3)
	 {
	 	
		 menu(q,w,r,y);
	 }
	 else
	 {
	 	
	 	
	 }
	 
	return 0;

}

int temp_12;
int mino=999999;
int mini=0;

int summary(int q,int w,int r,int y)
{
	FILE *fp_5;
	int sum1=0;
	int sum2=0;
	strcpy(str_temp5,tstr[r]);
	 strcat(str_temp5,".txt");
	temp_6=0;
	 fp_1=fopen(str_temp5,"r");
	 while(fscanf(fp_1,"%d\n",&par[temp_6])!=EOF)
	 {
	 //cout<<par[temp_6]<<endl;
	 temp_6++;
	 }
	 //cout<<"Values initially"<<endl;
	 temp_11=0;
	 for(i=0;i<q;i++)
	 {
	 	for(j=0;j<q;j++)
	 	{
	 		parr[i][j]=par[temp_11++];
	 		cout<<parr[i][j]<<" ";
		 }
		 cout<<endl;
	 }
	 
	 fclose(fp_1);
	 
	cout<<"Summary of the current group"<<endl;
	
	for(i=0;i<q;i++)
	
	{
	sum1=0;
	sum2=0;
		for(j=0;j<q;j++)
	
		{
			sum1=sum1+parr[i][j];
			sum2=sum2+parr[j][i];
	
		}
	
		total[i]=sum1-sum2;
		spent[i]=parr[i][i];
		giv[i]=sum1-spent[i];
	if(total[i]<=mino)
	{
		mino=total[i];
		mini=i;
	}
}
	
	temp_12=0;
		
		strcpy(str_temp5,tstr[r]);
		strcat(str_temp5,"sum.txt");
		
		fp_5=fopen(str_temp5,"w");
	
		cout<<"Name\tGiven Amount\tSpent amount\tTotal amount"<<endl;
	
		for(temp_12=0;temp_12<q;temp_12++)
		{
	
		fprintf(fp_5,"%s %d %d %d\n",mem[w+temp_12],giv[temp_12],spent[temp_12],total[temp_12]);
	
		{
	
			cout<<mem[w+temp_12]<<"\t\t"<<giv[temp_12]<<"\t\t"<<spent[temp_12]<<"\t"<<total[temp_12]<<endl;
	
		}
	
	}
	
	fclose(fp_5);
	
	cout<<endl;
	cout<<"Who should Pay next"<<endl;
	cout<<mem[w+mini]<<endl;
	
	cout<<"\nPress 1 for settleup menu"<<endl;
	cout<<"Press 2 to select another group"<<endl;
	cout<<"Press 3 to exit program"<<endl;
	cin>>temp_4;
	if(temp_4==1)
	{
		menu(q,w,r,y);
	}
	else if(temp_4==2)
	{
		grpdisp();
	}
	else
	{
		return 0;
	}
	return 0;
}

int menu(int q,int w,int r,int y)
{
	/*cout<<"Checking the value of index recieved"<<endl;
	for(i=0;i<y;i++)
	cout<<tstr[i]<<endl;
	cout<<tstr[e]<<endl;
	*/
	cout<<"\nPress 1 for Payments"<<endl;
	cout<<"Press 2 for Debts"<<endl;
	cout<<"Press 3 for Summary"<<endl;
	cout<<"Pressing any other Key will Exit"<<endl;


	for(i=0;i<10;i++)
	{
		for(j=0;j<10;j++)
		{
			parr[i][j]=0;
		}
	}
	for(i=0;i<200;i++)
	par[i]=0;

	int ch;
	int ch_t;

	cin>>ch;
	switch(ch)
	{

		case 1:

			cout<<"Press 1 for add payments"<<endl;
			cout<<"Press 2 for view payments"<<endl;

			cin>>ch_t;
			if(ch_t==1)
			{
				addpay(q,w,r,y);
			}

			else if(ch_t==2)
			{
			 	viewpay(q,w,r,y);
			}

			else
			{
				cout<<"Wrong choice entered"<<endl;

				menu(q,w,r,y);
			}
			break;
			
			case 2:
				
				debts(q,w,r,y);
				break;

				case 3:
					
					summary(q,w,r,y);
					break;

					default:
						cout<<"Exiting program"<<endl;
				}
				return 0;
	}

int main()
{
	//Intro function will be added here.
	intro(); 
	execute(); 
	//cout<<"check";
	//check();
	return 0;
}
