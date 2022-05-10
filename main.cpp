#include <iostream>
#include <vector>

int main()
{
    std::ios_base::sync_with_stdio(false);

    int n = 0;
    int height = 0;
    int width = 0;
    int plakaty = 0;
    std::vector <int> buildingsH;

    //std::cout<<"Podaj liczbe budynkow: ";
    std::cin>>n;

    for(int i = 0; i < n; i++)
    {
        //std::cout<<"Podaj szerokosc budynku nr "<<i+1<<": ";
        std::cin>>width;
        //std::cout<<"Podaj wyskokosc budynku nr "<<i+1<<": ";
        std::cin>>height;


        while(buildingsH.size() != 0 && buildingsH.back() > height)
        {
            buildingsH.pop_back();
        }

        if(buildingsH.size() == 0 || buildingsH.back() < height)
        {
            buildingsH.push_back(height);
            plakaty++;
        }
    }

    std::cout<<plakaty;

    return 0;
}



