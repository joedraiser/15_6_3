#include <iostream>
#include <vector>

void arrange(std::vector<int> * array)
{
    int temp;

    for(int i=0;i<array->size();i++)
        for(int j=0;j<array->size()-i-1;j++)
        {
            if((*array)[j]>(*array)[j+1])
            {
                temp=(*array)[j];
                (*array)[j]=(*array)[j+1];
                (*array)[j+1]=temp;
            }
        }
}

int main()
{
    int input=1;
    std::vector<int> array;

    do
    {
        std::cout << "Input: ";
        while(input != (int)'\n')
        {
            std::cin >> input;
            if (input == -2)
                break;
            else if ((input == -1)&&array.size()>=5)
            {
                arrange(&array);
                std::cout << "Output: " <<  array[4] << std::endl;
                break;
            }
            else if((input == -1)&&array.size()<5)
            {
                std::cout << "You should input more items into array.";
                continue;
            }
            else
                array.push_back(input);
        }
    }
    while(input!=-2);

    return 0;
}