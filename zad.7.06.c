#include <stdio.h>

#define X 3
#define Y 3
#define Z 3

int przekroj_b3(int a1, int b1, int a2, int b2) {
    int a3 = (a1 > a2) ? a1 : a2;
    int b3 = (b1 < b2) ? b1 : b2;

    if (a3 <= b3) {
        return b3;
    } else {
        return -1;
    }
}

int sprawdz_sasiadow(int T[X][Y][Z], int x, int y, int z) {
    int directions[26][3] = {
        {-1, -1, -1}, {-1, -1,  0}, {-1, -1,  1},
        {-1,  0, -1}, {-1,  0,  0}, {-1,  0,  1},
        {-1,  1, -1}, {-1,  1,  0}, {-1,  1,  1},
        { 0, -1, -1}, { 0, -1,  0}, { 0, -1,  1},
        { 0,  0, -1}, { 0,  0,  1},
        { 0,  1, -1}, { 0,  1,  0}, { 0,  1,  1},
        { 1, -1, -1}, { 1, -1,  0}, { 1, -1,  1},
        { 1,  0, -1}, { 1,  0,  0}, { 1,  0,  1},
        { 1,  1, -1}, { 1,  1,  0}, { 1,  1,  1}
    };

    for (int i = 0; i < 26; i++) {
        int nx = x + directions[i][0];
        int ny = y + directions[i][1];
        int nz = z + directions[i][2];

        if (nx >= 0 && nx < X && ny >= 0 && ny < Y && nz >= 0 && nz < Z) {
            if (T[x][y][z] <= T[nx][ny][nz]) {
                return 0;
            }
        }
    }
    return 1;
}

int main() {
    int T[X][Y][Z] = {
        {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}},
        {{2, 3, 4}, {5, 6, 7}, {8, 9, 10}},
        {{3, 4, 5}, {6, 7, 8}, {9, 10, 11}}
    };

    for (int x = 0; x < X; x++) {
        for (int y = 0; y < Y; y++) {
            for (int z = 0; z < Z; z++) {
                if (sprawdz_sasiadow(T, x, y, z)) {
                    printf("Element T[%d][%d][%d] = %d jest wiekszy od swoich sasiadow\n", x, y, z, T[x][y][z]);
                }
            }
        }
    }

    return 0;
}
