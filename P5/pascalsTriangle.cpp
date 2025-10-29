#include <iostream>

void calcNextRow(const int* prevRow, int* nextRow, int rowID){
    nextRow[0] = 1;
    nextRow[rowID] = 1;

    for (int j = 1; j < rowID; j++){
        nextRow[j] = prevRow[j] + prevRow[j-1];
    };
}

int main(){
    int num_rows;
    std::cout << "Number of rows: ";
    std::cin >> num_rows;

    int* prevRow = new int[num_rows + 1];
    int* nextRow = new int[num_rows + 1];
    
    prevRow[0] = 1;

    for (int i = 0; i <= num_rows; i++){
        calcNextRow(prevRow, nextRow, i);
        std::string padding(num_rows - i, ' ');
        std::cout << padding;

            for (int j = 0; j <= i; j++){
                std::cout << nextRow[j] << " ";
            }
            std::cout << std::endl;

        int* tmpRow = prevRow;
        prevRow = nextRow;
        nextRow = tmpRow;
    };

    return 0;
}