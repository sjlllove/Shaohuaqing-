//�ļ�������ҵһ__��Ϸ
//��������Ϸ
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{ 	int num1,num2,num3,input1,input2,input3,numA,numB,i,j,k;
	char answer;
	
	srand(time(NULL));
	j=0;
	while (true){
		cout<<"��Ҫ����Ϸ��Y/N����";
		cin>>answer ;
		if (answer=='N') break;
		
		if (answer=='Y'){
			num1=rand()*10/(RAND_MAX+1);
			num2=rand()*10/(RAND_MAX+1);
			num3=rand()*10/(RAND_MAX+1);
			cout<<num1; 
			
			cout<<"��������²������:"; 
			cin>>input1;
			cin>>input2;
			cin>>input3;
			
			numA=0;
			numB=0;
			cout<<input1;
			
			for (i=1;i<=7;++i){
				if ((num1==input1)&&(num2==input2)&&(num1==input1))
					cout<<"��ϲ����¶���";
					++k;
					break;
				
				if(num1==input1) ++numA;
				if(num2==input2) ++numA;
				if(num3==input3) ++numA;
				if(num1==input2) ++numB;
				if(num1==input3) ++numB;
				if(num2==input3) ++numB;
					
				cout<<numA<<'A'<<numB<<'B';
				
				if(i==7)
					cout<<"���ź�����û���ڹ涨�����ڲ¶ԡ�����"<<num1<<num2<<num3;
			
			}
		}
		
	 	++j;
	}
	cout<<"��һ������"<<j<<"�֣�Ӯ��"<<k<<"�֣�����"<<j-k<<"��";
	return 0;
}
				
				
			
			 
			
		
			
	
	

