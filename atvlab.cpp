#include <iostream>

struct Compras
{     
  std::string item;
  int valor;
};



int vetor (int n)
{
  struct Compras CP[10000];
    for (int i = 0; i < n; i++)
  {
    //std::cout << "Nome e valor do item: " << CP[i].item << " " << CP[i].valor << std::endl;
    std::cin >> CP[i].item;
    std::cin >> CP[i].valor;
    //std::cout << "Nome e valor do item: " << CP[i].item << " " << CP[i].valor << std::endl;
  };
  
  // necessário descobrir como retornar os valores da struct na função.
}



int main ()
{
  int n;
  std::cin >> n;
  vetor(n);
  
  return 0;
}
