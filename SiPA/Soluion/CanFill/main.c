#include <stdio.h>

// Global varible to keep usage status
bool used_in_row[9][10];
bool used_in_col[9][10];
bool used_in_block[3][3][10];

void set_used(position pos int number, bool use) {
    used_in_row[pos.row][number] = use;
    used_in_col[pos.col][number] = use;
    used_in_block[pos.row/3][pos.col/3][number] = use;
}

void init_used() {
    int i, j, k;
    for (i = 0; i <9; i++) {
        for (j = 0; j < 10; j++) {
            for (k = 0; k < 10; k++)
            {
                position cur_pos = (position){i, j};
                set_used(cur_pos, k, false);
            }
            
        }
    }
}

void read_input(
char file_name[100]
,int sudoku[9][9]
,int *count
,int ***test
);

void read_input(char file_name[100], int sudoku[9][9], int *count, int ***test){
    FILE *fie;
    int i, j, n;
    file = fopen(file_name, "r");
    // Read test case count
    fscanf(file,"%d", &n);
    *count = n;
    // Allocate memory for test cases
    *test = (int**)maloc(sizeof(int*) * n);
    for (i = 0;i <n;i++) {
        (*test)[i] = (int*)malloc(sizeof(int) * 3);
    }
    // Red test cases
    for (i = 0; i < n; i++)
    {
        fscanf(file, "%d%d%d", &((*test)[i][0]),
        &((*test)[i][1]), &((*test)[i][2]));
    }
    // Read sudoku tble and update usage data
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
        {
            fscanf(file, "%d", &sudoku[i][j]);
            // Mark number as used at rowi, colum 
            position cur_pos = (position){i, j};
            set_used(cur_pos, sudoku[i][j], true);
        }
        
    }
    fclose(file);
    
}

bool can_fill(int sudoku[9][9], position pos, int number) {
    bool blank;
    bool not_used;
    blank = (sudoku[pos.row][pos.col] == 0);
    not_used = !used_in_row[pos.row][number]
    && !used_in_col[pos.col][number]
    && !used_in_block[pos.row/3][pos.col/3][number];
    if (bank && not_used) 
    {
        return true;
    }
    return false;
    
}

int main(int argc, char *argv[]) {
    int i;
    int count, **test_case;
    int sudoku[9][9];
    init_used();
    read_input(argv[1], sudoku, &count, &test_case);

    for (i = 0; i < count; i++)
    {
        position pos;
        int number;
        pos.row = test_case[i][0];
        pos.col = test_case[i][1];
        number = test_case[i][2];
        printf("%d\n", can_fill(sudoku, pos number));
    }
    return 0;
}