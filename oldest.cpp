#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int day;
    int month;
    int year;
} Person;

int oldestFcn(Person p1, Person p2);

int main() {
    Person person1, person2;

    // Input for first person
    printf("Enter the name of the first person: ");
    fgets(person1.name, 50, stdin);
    person1.name[strcspn(person1.name, "\n")] = 0; // Remove trailing newline character

    printf("Enter the birthdate of the first person (day month year): ");
    scanf("%d %d %d", &person1.day, &person1.month, &person1.year);

    // Clear input buffer
    while (getchar() != '\n');

    // Input for second person
    printf("Enter the name of the second person: ");
    fgets(person2.name, 50, stdin);
    person2.name[strcspn(person2.name, "\n")] = 0; // Remove trailing newline character

    printf("Enter the birthdate of the second person (day month year): ");
    scanf("%d %d %d", &person2.day, &person2.month, &person2.year);

    int result = oldestFcn(person1, person2);

    if (result == 1) {
        printf("%s is the oldest.\n", person1.name);
    } else if (result == 2) {
        printf("%s is the oldest.\n", person2.name);
    } else {
        printf("Both are of the same age.\n");
    }

    return 0;
}

int oldestFcn(Person p1, Person p2) {
    if (p1.year < p2.year) {
        return 1;
    } else if (p1.year > p2.year) {
        return 2;
    } else {
        if (p1.month < p2.month) {
            return 1;
        } else if (p1.month > p2.month) {
            return 2;
        } else {
            if (p1.day < p2.day) {
                return 1;
            } else if (p1.day > p2.day) {
                return 2;
            } else {
                return 0; // They are the same age
            }
        }
    }
}