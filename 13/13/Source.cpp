#include <stdio.h>

struct city {
    char name[255];
    char region[255];
    char country[255];
    int age;
    int population;
};

void add_city(struct city* cities) {

    printf("Enter the city name\n");
    scanf_s("\n%s", &(cities->name), 255);

    printf("Enter the city region\n");
    scanf_s("\n%s", &(cities->region), 255);

    printf("Enter the city country\n");
    scanf_s("\n%s", &(cities->country), 255);

    printf("Enter the city age\n");
    scanf_s("\n%d", &(cities->age));

    printf("Enter the city population\n");
    scanf_s("\n%d", &(cities->population));
}

void print_city(struct city* cities, int size_cities) {

    for (int i = 0; i < size_cities; i++) {
        printf("\nCity #%d\n", i + 1);
        printf("Name: %s\nRegion: %s\nCountry: %s\nAge: %d\nPopulation: %d\n", cities[i].name, cities[i].region, cities[i].country, cities[i].age, cities[i].population);
    }

}

void main(void) {

    struct city cities[2];

    printf("\nCity #1\n");
    add_city(&cities[0]);

    printf("\nCity #2\n");
    add_city(&cities[1]);

    print_city(cities, 2);

}
