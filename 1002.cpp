#include <iostream> 
#include <stdio.h>
using namespace std;
int  main()
{
	char c = '\n';
	char t = '\n';
	int i = 0;
	int count[35] = {0};

	while ((i < 34) ||( (i = 34)&&(cin.get())!=EOF))
	{
		if (c = '\n'&&(((t=cin.get()) == '1')||(t=='2')))
		{
			i++;
			while ((c = cin.get()) != '\n')
			{
				if (c == ' ')
				{
					count[i]++;
					continue;
				}
			}
			count[i]--;
		}
		else if (c = '\n'&&(t=cin.get())!= '1')
		{
			while ((c = cin.get()) != '\n')
			{
				if (c == ' ')
				{
					count[i]++;
					continue;
				}
			}
			count[i]--;
			continue;
		}
	}
	count[4] -= 1;

	for (i = 1; i < 32; i++)
		cout << "1:" << i << "\t"<<count[i] << endl;
	for (i = 32; i < 35; i++)
		cout << "2:" << i - 31 <<"\t"<< count[i] << endl;
	fflush(stdin);
	getchar();
	return 0;
}