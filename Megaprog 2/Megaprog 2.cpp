#include <iostream>
#include <cmath>
using namespace std;


class Numbers
{
public:


    void massMMM()
    {
        int n; cout << "Введите размер массива: "; cin >> n;
        auto *mass = new double[n];
        for(int i=0; i<n; i++)
        {
            cout << "Введите значение элемента массива №" << i + 1 << ": " ; cin >> mass[i];
        }
        int N; cout << "Введите действие которое хотите совершить с массивом, список действий, которые можно совершить:" << endl <<
            "1) Найти максимальное значение" << endl <<
            "2) Найти минимальное значение" << endl <<
            "3) Найти среднее значение" << endl <<
            "4) Найти сумму элементов массива" << endl <<
            "5) Найти произведение элементов массива" << endl <<
            "Ваш выбор: ";
    	cin >> N;
        double max = 0, min = 0, mid = 0, sum = 0, mul = 1;
        switch(N)
        {
        case 1: max = mass[0];  for (int i = 0; i < n; i++) { if (max < mass[i]) { max = mass[i]; } } cout <<"Ваш результат = "<< max << endl << endl; break;
        case 2: min = mass[0];  for (int i = 0; i < n; i++) { if (min > mass[i]) { min = mass[i]; } } cout << "Ваш результат = " << min << endl << endl; break;
        case 3: for (int i = 0; i < n; i++) { sum += mass[i]; } mid = sum/n; cout << "Ваш результат = " << mid << endl << endl; break;
        case 4: for (int i = 0; i < n; i++) { sum += mass[i]; } cout << "Ваш результат = " << sum << endl << endl; break;
        case 5: for (int i = 0; i < n; i++) { mul *= mass[i]; } cout << "Ваш результат = " << mul << endl << endl; break;
        default: cout << "Ошибка - выбранного действия не существует, убедитесь что вы правильно ввели номер (нужно указать только цифру действия) и попробуйте ещё раз ";
            delete[]mass;
        }
    }


    void calc()
    {
        int z; cout << "Введите номер задачи которую хотите выполнить, список задач:"<<endl<<
            "1) Операции между двумя числами"<<endl<<
            "2) Извлечение корней"<<endl<<
            "3) Возведение числа в степень"<<endl << 
            "Ваш выбор: ";
    	cin >> z;
        double x, y, res_1, n, res_2, b, e, l, res_3 = 1;
        switch (z) {
        case 1:
            char operation;
            cout << "Введите математический пример: ";
            cin >> x >> operation >> y;
            switch (operation)
            {
            case '+': res_1 = x + y; break;
            case '-': res_1 = x - y; break;
            case '*': res_1 = x * y; break;
            case '/': res_1 = x / y; break;
            default: cout << "Ошибка - неизвестная операция";
            }
            cout << "Ваш результат = " << res_1 << endl << endl; break;

        case 2:
        	cout << "Введите число из которого хотите извлечь корень: "; cin >> n;
            cout << "Введите степень корня: " << endl; cin >> l;
            res_2 = pow(n, 1.0 / l);
            if (n >= 0) { cout << "Ваш корень = " << res_2 << endl << endl; }
            else { cout << "Ошибка - невозможно извлечь корень из отрицательного числа"<<endl; }
            break;

       case 3:
            cout << "Введите основание: "; cin >> b;
            cout << "Введите степень: "; cin >> e;
            if (e > 0) {
                for (int i = 0; i < e; i++)
                {
                    res_3 *= b;
                }
                cout << "Ответ = " << res_3 << endl<<endl;
            }
            else { cout << "Ошибка - данный код не умеет считать отрицательную степень, ждите обновлений!"; } break;
            
        default: cout << "Неизвестная ошибка";
        }
    }
};


int main()
{
    setlocale(LC_ALL, "ru");

    while (true) {
        int p; cout << "Здравствуйте! Выберите номер программы которую хотите использовать, список программ: " << endl <<
            "0) Выход"<<endl<<
            "1) Операции с массивами" << endl <<
            "2) Калькулятор" << endl<< 
            "Ваш выбор: ";
        cin >> p;
        switch (p)
        {
        case 0:  cout << "До свидания!" << endl; return 0;
        case 1: Numbers prog_1; prog_1.massMMM(); break;
        case 2: Numbers prog_2; prog_2.calc(); break;
        default: cout << "Ошибка - выбранной программы не существует, убедитесь что вы правильно ввели номер (нужно указать только цифру программы) и попробуйте ещё раз"<<endl;
        }
    }
}