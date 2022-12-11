#include <iostream>
void swap(int *ptr1, int *ptr2)
{
    int x;
    x = *ptr1;
    *ptr1=*ptr2;
    *ptr2=x;
}


int main() {
    //2
    {
        std::cout << "Enter the a: ";
        int a;
        std::cin >> a;
        std::cout << "Enter the b: ";
        int b;
        std::cin >> b;
        // значения до
        std::cout << a << " " << b << "\n";
        int *ptr1 = &a;
        int *ptr2 = &b;

        swap(ptr1,ptr2);
        // значения после
        std::cout << a << " " << b << "\n";
    }
    //3
    {
        std::cout << "Enter the length: ";
        int n;
        std::cin >> n;
        int *a = new int[n];
        //запрос элементов массива
        std::cout << "Enter the elements: \n";
        for (int i = 0; i<n;i++)
        {
            std::cin >> a[i];
        }
        // указатели на первый и последний эл-ты массива
        int *ptrFirst = &a[0];
        int *ptrLast = &a[n-1];

        swap(ptrFirst,ptrLast);

        for (int i = 0; i<n;i++)
        {
            std::cout << a[i] << " ";
        }
        std::cout << "\n";
    }
    //4
    {
       double **p = 0; // дано
       double a = 2.0; // число в квадрате
       double *pa = &a; // создали указатель на квадрат
       delete p; // убрали ноль из р
       p = &pa;  // присвоили новое значение
       std::cout << **p << "\n"; // вывод числа в квадрате
       delete p;
       delete pa; // удалили все динамические объекты
    }

    return 0;
}
