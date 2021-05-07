//FUNCTION TO READ FROM THE FILE
void readFromFile(char file_name[], int storage[], int &noOfEn)
{
    ifstream readTheFile(file_name);
    readTheFile >>
        noOfEn;

    //for loop to store file contents
    for (int i = 0; i < noOfEn; i++)
    {
        readTheFile >> storage[i];
    }
}

int main()
{
    int count, stor[200];
    char file_name[15] = {"dataBlocks.dat"};

    readFromFile(file_name, stor, count);
    return 0;
}