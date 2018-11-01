/*An automobile company has serial number engine parts starting from AA0 to FF9. 
The other characteristics of parts to be specified in structure are year of 
manufacturing, material and quantity manufactured.
(a) Specify a structure to store information corresponding to part.
(b) Write a program using pointer to retrieve information on parts with 
    serial numbers between BB1 and CC6
*/

#include<stdio.h>
#include<conio.h>
struct automobile
{
	int year, material, quality;
	char ser[4];
};
void main()
{
	int i=0;
	struct automobile a[60]={{2000,1,10,"AA0"},
				{2001,2,9,"AA1"},
				{2002,3,8,"AA2"},
				{2003,4,7,"AA3"},
				{2004,5,6,"AA4"},
				{2005,6,5,"AA5"},
				{2006,4,7,"AA6"},
				{2007,6,3,"AA7"},
				{2008,5,8,"AA8"},
				{2009,5,8,"AA9"},
				{2010,1,10,"BB0"},
				{2011,2,9,"BB1"},
				{2012,3,8,"BB2"},
				{2013,4,7,"BB3"},
				{2014,5,6,"BB4"},
				{2015,6,5,"BB5"},
				{2016,4,7,"BB6"},
				{2017,6,3,"BB7"},
				{2018,5,8,"BB8"},
				{2019,5,8,"BB9"},
				{2020,1,10,"CC0"},
				{2021,2,9,"CC1"},
				{2022,3,8,"CC2"},
				{2023,4,7,"CC3"},
				{2024,5,6,"CC4"},
				{2025,6,5,"CC5"},
				{2026,4,7,"CC6"},
				{2027,6,3,"CC7"},
				{2028,5,8,"CC8"},
				{2029,5,8,"CC9"},
				{2030,1,10,"DD0"},
				{2031,2,9,"DD1"},
				{2032,3,8,"DD2"},
				{2033,4,7,"DD3"},
				{2034,5,6,"DD4"},
				{2035,6,5,"DD5"},
				{2036,4,7,"DD6"},
				{2037,6,3,"DD7"},
				{2038,5,8,"DD8"},
				{2039,5,8,"DD9"},
				{2040,1,10,"EE0"},
				{2041,2,9,"EE1"},
				{2042,3,8,"EE2"},
				{2043,4,7,"EE3"},
				{2044,5,6,"EE4"},
				{2045,6,5,"EE5"},
				{2046,4,7,"EE6"},
				{2047,6,3,"EE7"},
				{2048,5,8,"EE8"},
				{2049,5,8,"EE9"},
				{2050,1,10,"FF0"},
				{2051,2,9,"FF1"},
				{2052,3,8,"FF2"},
				{2053,4,7,"FF3"},
				{2054,5,6,"FF4"},
				{2055,6,5,"FF5"},
				{2056,4,7,"FF6"},
				{2057,6,3,"FF7"},
				{2058,5,8,"FF8"},
				{2059,5,8,"FF9"}};
	struct automobile *ptr;
	clrscr();
	ptr=&a[0];
	for(i=11;i<27;i++)
	{
		printf("\nStructure no. => %d",i);
		printf("\nSerial no => %s",(ptr+i)->ser);
		printf("\nMaterial => %d",(ptr+i)->material);
		printf("\nYear of manufacture => %d",(ptr+i)->year);
		printf("\nQuality => %d\n",(ptr+i)->quality);
		getch();
	}
	printf("\n\n================================================================================");
	printf("\n-Tirth Bharatiya");

	getch();
}
