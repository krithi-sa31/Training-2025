//weather

#include<stdio.h>
#include<string.h>
struct weather
{
    int temp,humidity;
    char city[100];
};

typedef struct weather cities;

void searchCityTemp(cities weather[],int n,char searchCity[]);
void saveFile(cities weather[],int n);

int main()
{
    int n;
    char searchCity[50];
    cities weather[100];

    printf("enter the number of cities:");
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        printf("city %d:",i+1);
        scanf("%s%d%d",weather[i].city,&weather[i].temp,&weather[i].humidity);
    }

    saveFile(weather,n);

    printf("enter city name to search:");
    scanf("%s",searchCity);
    searchCityTemp(weather,n,searchCity);
    return 0;
}

void saveFile(cities weather[],int n)
{
    FILE *file=fopen("weather_data.txt","w");
    if(file==NULL)
    {
        printf("error");
        return;
    }
    for(int i=0;i<n;i++)
    {
        fprintf(file,"%s %d %d\n",weather[i].city,weather[i].temp,weather[i].humidity);
        
    }
    fclose(file);
    printf("Data saved in weather_data.txt\n");
}

void searchCityTemp(cities weather[],int n,char searchCity[])
{
    for(int i=0;i<n;i++)
    {
        if(strcmp(weather[i].city,searchCity)==0)
        {
            printf("Weather in %s: %d,%d Humidity\n",weather[i].city,weather[i].temp,weather[i].humidity);
        }
    }
}
