#include <iostream>
#include <cmath>
#include <ctime>
using namespace std;


class Numbers
{
public:


    void massMMM()
    {
        int size; cout << "Введите размер массива: "; cin >> size;
        auto *mass = new double[size];
        for(int i=0; i < size; i++)
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
        case 1: 
            max = mass[0];  for (int i = 0; i < size; i++)
        {
	        if (max < mass[i]) { max = mass[i]; }
        }
        	cout <<"Ваш результат = "<< max << endl << endl;
        	break;

        case 2:
            min = mass[0];  for (int i = 0; i < size; i++)
        {
	        if (min > mass[i]) { min = mass[i]; }
        }
        	cout << "Ваш результат = " << min << endl << endl;
        	break;

        case 3:
            for (int i = 0; i < size; i++)
        {
	        sum += mass[i];
        }
        	mid = sum/ size;
        	cout << "Ваш результат = " << mid << endl << endl;
        	break;

        case 4:
            for (int i = 0; i < size; i++)
            {
	            sum += mass[i];
            }
        	cout << "Ваш результат = " << sum << endl << endl;
        	break;

        case 5:
            for (int i = 0; i < size; i++)
            {
	            mul *= mass[i];
            }
        	cout << "Ваш результат = " << mul << endl << endl;
        	break;

        default: cout << "Ошибка - выбранного действия не существует, убедитесь что вы правильно ввели номер (нужно указать только цифру действия) и попробуйте ещё раз ";
            delete[]mass;
        }
    }


    void calc()
    {
        int prog_calc;
    	cout << "Введите номер задачи которую хотите выполнить, список задач:"<<endl<<
            "1) Операции между двумя числами"<<endl<<
            "2) Извлечение корней"<<endl<<
            "3) Возведение числа в степень"<<endl << 
            "Ваш выбор: ";
    	cin >> prog_calc;
        double numb_1, numb_2, res_1, numb_3, res_2, base, power, root, res_3 = 1;
        switch (prog_calc) {
        case 1:
            char operation;
            cout << "Введите математический пример: ";
            cin >> numb_1 >> operation >> numb_2;
            switch (operation)
            {
            case '+': res_1 = numb_1 + numb_2; break;
            case '-': res_1 = numb_1 - numb_2; break;
            case '*': res_1 = numb_1 * numb_2; break;
            case '/': res_1 = numb_1 / numb_2; break;
            default: cout << "Ошибка - неизвестная операция";
            }
            cout << "Ваш результат = " << res_1 << endl << endl; break;

        case 2:
        	cout << "Введите число из которого хотите извлечь корень: ";
        	cin >> numb_3;
            cout << "Введите степень корня: " << endl;
        	cin >> root;
            res_2 = pow(numb_3, 1.0 / root);
            if (numb_3 >= 0) 
            { cout << "Ваш корень = " << res_2 << endl << endl; }
            else
            { cout << "Ошибка - невозможно извлечь корень из отрицательного числа"<<endl; }
            break;

       case 3:
            cout << "Введите основание: ";
        	cin >> base;
            cout << "Введите степень: ";
        	cin >> power;
            if (power > 0) {
                for (int i = 0; i < power; i++)
                {
                    res_3 *= base;
                }
                cout << "Ответ = " << res_3 << endl<<endl;
            }
            else 
            { cout << "Ошибка - данный код не умеет считать отрицательную степень, ждите обновлений!"; }
        	break;
            
        default: 
            cout << "Неизвестная ошибка";
        }
    }

    void passOp()
    {
        srand(time(NULL));
        cout << "Введите номер действия которое хотите совершить:" << endl <<
            "1) Генератор пинконда или пароля определенной длины только из цифр" << endl <<
            "Ваш выбор: ";
        int prog_pass, length_1, password_1;
        cin >> prog_pass;
        cout << "Введите длину вашего пароля/пинкода: ";
        cin >> length_1;
        cout << "Ваш пароль: ";
        for(int i=0; i<length_1; i++)
        {
            password_1 = rand() % 10;
            cout << password_1;
        }
        cout << endl;
    }
};


int main()
{
    setlocale(LC_ALL, "ru");

    while (true) {
        int prog_main;
    	cout << "Здравствуйте! Выберите номер программы которую хотите использовать, список программ: " << endl <<
            "0) Выход"<<endl<<
            "1) Операции с массивами" << endl <<
            "2) Калькулятор" << endl<<
            "3) Генератор паролей"<<endl<<
            "Ваш выбор: ";
        cin >> prog_main;
        switch (prog_main)
        {
        case 0:  cout << "До свидания!" << endl;
        	return 0;

        case 1: Numbers prog_1;
        	prog_1.massMMM();
        	break;

        case 2: Numbers prog_2;
        	prog_2.calc();
        	break;

        case 3: Numbers prog_3;
            prog_3.passOp();
            break;

        default: cout << "Ошибка - выбранной программы не существует, убедитесь что вы правильно ввели номер (нужно указать только цифру программы) и попробуйте ещё раз"<<endl;
        }
    }
}