#include <iostream>
using namespace std;
int main()
{
  
    	int level;
    	cout<<"Enter the number of christmas tree levels:"<<endl;
    	cin>>level;
    	int * tab = new int[level];

    	for(int i=0;i<level;i++)
    	{
       		cout<<"Enter the height of the "<<i+1<<" level: "<<endl;
       		cin>>tab[i];
    	}
    	int max_rozmiar=tab[0];
	for(int i=0;i<level;i++)
	{
		if(max_rozmiar<tab[i])max_rozmiar=tab[i];
	}

    	for(int lev=0;lev<level;lev++)
	{
    		for(int i=0;i<tab[lev];i++)
    		{
        		for(int j=0;j<max_rozmiar-1-i;j++)
        		{
        			cout<<" ";
        		}
			if(lev==0&&i==0)
			{
				cout<<"^"<<endl;
				continue;
			}
        		for( int j=0;j<i+1;j++)
        		{
				if(j==0&&i!=0)cout<<"/";
            			else cout<<"#";
        		}
            
        		for( int j=0;j<i;j++)
        		{
				if(j+1==i)cout<<"\\";
            			else cout<<"#";
        		}
        		cout<<endl;
    		}
   	}
     for (int trunk = 1; trunk <= tab[level-1]-1; trunk++)
       {
         cout << " ";
       }
       cout << "#";
    	return 0;
}