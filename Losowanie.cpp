#include <iostream>
#include <cstdlib>
#include <ctime>

int main()

{
	
	srand( time( NULL ) );
    std::cout<<(( std::rand() % 1000 ) + 1 ) << std::endl;
	int wynik = (std::rand() % 1000 ) + 1 ;                   //losowanie
	
	int liczba;                                               
	int i = 0;                                                //Liczba "strza³ów"
	
	do
	{

	i++;

	std::cin>>liczba;
	
	if(liczba != wynik)
		
		{
		if(liczba>wynik)
			std::cout<<"Za duzo"<<std::endl;
		else
			std::cout<<"Za malo"<<std::endl;
		}
			
	else
		std::cout<<"Dobrze, szukana liczba to "<<wynik<<" ,probowales " <<i<< " razy";
		
	} while(liczba != wynik);
	
	
	 return 0; 
		}
	
	
	

