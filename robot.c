#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

typedef struct {
    int x;
    int y;
} Position;

void PrintPosition(Position *pos) {
    if (pos != NULL) {
        printf("Robot Position: x = %d, y = %d\n", pos->x, pos->y);
    }
}

Position* CreatePosition(int x, int y) {
    Position *pos = (Position*)malloc(sizeof(Position));
    if (pos != NULL) {
        pos->x = x;
        pos->y = y;
    }
    return pos;
}

void DestroyPosition(Position *pos) {
    if (pos != NULL) {
        free(pos);
    }
}

float DistancePositions(Position *pos1, Position *pos2) {
    if (pos1 == NULL || pos2 == NULL) {
        return -1.0f; // Return -1.0f to indicate an error
    }
    int dx = pos1->x - pos2->x;
    int dy = pos1->y - pos2->y;
    return sqrt(dx * dx + dy * dy);
}

Position* GenerateArrayOfPositions(int N) {
    if (N <= 0) {
        return NULL;
    }
    Position *array = (Position*)malloc(N * sizeof(Position));
    if (array != NULL) {
        srand(time(NULL));
        for (int i = 0; i < N; i++) {
            array[i].x = rand() % 11;
            array[i].y = rand() % 11;
        }
    }
    return array;
}

void DestroyArrayOfPositions(Position *array) {
    if (array != NULL) {
        free(array);
    }
}

int main(int argc, char *argv[]) {
    // Test CreatePosition and PrintPosition
    Position *pos1 = CreatePosition(3, 4);
    PrintPosition(pos1);

    // Test DistancePositions
    Position *pos2 = CreatePosition(7, 1);
    PrintPosition(pos2);
    float distance = DistancePositions(pos1, pos2);
    printf("Distance between positions: %.2f\n", distance);

    // Test GenerateArrayOfPositions
    int N = 5;
    Position *positionsArray = GenerateArrayOfPositions(N);
    for (int i = 0; i < N; i++) {
        PrintPosition(&positionsArray[i]);
    }

    // Clean up
    DestroyPosition(pos1);
    DestroyPosition(pos2);
    DestroyArrayOfPositions(positionsArray);

    return 0;
}