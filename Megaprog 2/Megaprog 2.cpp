#include <iostream>
#include <cmath> //для работы с тригонометрией и корнями
#include <ctime> //для генерации пароля
using namespace std;


class Numbers //класс для работы с числами
{
public:


    void massMMM() //функция для работы с массивами
    {
        int size; cout << "Введите размер массива: ";
    	cin >> size;
        auto *mass = new double[size];
        for(int i=0; i < size; i++)
        {
            cout << "Введите значение элемента массива №" << i + 1 << ": " ; cin >> mass[i];
        }
        int prog_mass; cout << "Введите действие которое хотите совершить с массивом, список действий, которые можно совершить:" << endl <<
            "1) Найти максимальное значение" << endl <<
            "2) Найти минимальное значение" << endl <<
            "3) Найти среднее значение" << endl <<
            "4) Найти сумму элементов массива" << endl <<
            "5) Найти произведение элементов массива" << endl <<
            "6) Сортировка массива" << endl<<
            "Ваш выбор: ";
    	cin >> prog_mass;
        double max = 0, min = 0, mid = 0, sum = 0, mul = 1;
        switch(prog_mass)
        {
        case 1: 
            max = mass[0];
        	for (int i = 0; i < size; i++)
        {
	        if (max < mass[i]) { max = mass[i]; }
        }
        	cout <<"Ваш результат = "<< max << endl << endl;
        	break;

        case 2:
            min = mass[0];
        	for (int i = 0; i < size; i++)
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
        case 6:
            for (int i = 0; i < size - 1; i++)
            {
                for (int j = 0; j < size - i - 1; j++)
                {
                    if (mass[j] > mass[j + 1])
                    {
                        int temp = mass[j];
                        mass[j] = mass[j + 1];
                        mass[j + 1] = temp;
                    }
                }
            }

            cout << "Отсортированный массив: \n";
            for (int i = 0; i < size; i++)
            {
                cout << mass[i];
                if (i < size - 1)
                {
                    cout << ", ";
                }
            }
            cout << endl << endl;
        default: cout << "Ошибка - выбранного действия не существует, убедитесь что вы правильно ввели номер (нужно указать только цифру действия) и попробуйте ещё раз ";
            delete[]mass;
        }
    }


    void calc() //Функция для калькулятора
    {
        int prog_calc;
    	cout << "Введите номер задачи которую хотите выполнить, список задач:"<<endl<<
            "1) Операции между двумя числами"<<endl<<
            "2) Извлечение корней"<<endl<<
            "3) Возведение числа в степень"<<endl <<
            "4) Тригонометрия "<<endl<<
            "5) Логорифмы"<<endl<<
            "Ваш выбор: ";
    	cin >> prog_calc;
        double numb_1, numb_2, res_1, numb_3, res_2, base, power, root, res_3 = 1, res_4, numb_4;
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
            res_3 = pow(base, power);
            cout << "Ответ = " << res_3 << endl << endl;
        	break;

        case 4:
            cout << "Выберите действие которое хотите совершить, спискок действий: "<<endl<<
                "1) Посчитать синус"<<endl<<
                "2) Косинус"<<endl<<
                "3) Тангенс"<<endl<<
                "4) Котангенс"<<endl<<
                "Ваш выбор: ";
            int trip_prog;
            cin >> trip_prog;
            cout << "Введите значение выбранного действия в градусах: "; cin >> numb_4;
           switch (trip_prog) {
           case 1: res_4 = sin(numb_4/57.2957795131); break; // Для перевода градусов в радианы, нужно разделить переменную на 57...
           case 2: res_4 = cos(numb_4 / 57.2957795131); break;
           case 3: res_4 = tan(numb_4 / 57.2957795131); break;
           case 4: res_4 = 1 / tan(numb_4 / 57.2957795131); break;
           default: cout << "Данного действия не существует, убедитесь в правильности написания";
           } 
           cout <<"Ответ - " <<res_4<<endl<<endl; break;

        case 5:
           double base_5, numb_5, res_5;
           cout << "Введите логорифм который хотите посчитать: log";
           cin >> base_5 >> numb_5;
           res_5 = log(numb_5) / log(base_5);
           cout << "Ваш результат = " << res_5<<endl<<endl;
           break;

        default: 
            cout << "Неизвестная ошибка";
        }
    }

    void passOp() //функция для генератора паролей
    {
        srand(time(NULL)); //ранду присваевается значение сранда, который в свою очередь генирирует цифры в зависимости от времени
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
            password_1 = rand() % 10; //функция генерирует не только маленькие числа, поэтому ищем остаток от деления на 10 и получаем все цифры от 0 до 9
            cout << password_1;
        }
        cout << endl;
    }

};


int main()
{
    setlocale(LC_ALL, "ru"); //Поддержка русского языка

    while (true) //цикл для того чтобы программа не вылетала после каждой задачи выполненной до конца
    { 
        int prog_main;
    	cout << "Здравствуйте! Выберите номер программы которую хотите использовать, список программ: " << endl <<
            "1) Операции с массивами" << endl <<
            "2) Калькулятор" << endl<<
            "3) Генератор паролей"<<endl<<
            "0) Выход"<<endl<<
            "Ваш выбор: ";
        cin >> prog_main;
        switch (prog_main)
        {
        case 0: cout << "До свидания!"; return 0;
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