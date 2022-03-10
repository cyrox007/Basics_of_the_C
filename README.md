# Задание 3
## Задача 1
Написать авторизационное приложение, которое запрашивает у пользователя логин\пароль (заведомо установленный в приложение). В случае успешной авторизации вывести приветствие. Если пользователь ввел данные три раза неправильно, предоставить возможность ввести пароль опять только через 3 секунды. Если пользователь ввел пароль неправильно пять раз - завершить работу приложения.
Пример выполнения:
``` console
./run.bin

Enter login: test0
Enter password: test0
Welcome ADMIN!

========

./run.bin

Enter login: test1
Enter password: test1
User with such credentials was not found
---
Enter login: test2
Enter password: test2
User with such credentials was not found
---
Enter login: test3
Enter password: test3
User with such credentials was not found
Waiting 3 secs ...
---
Enter login: test4
Enter password: test4
User with such credentials was not found
---
Enter login: test5
Enter password: test5
User with such credentials was not found
Exit 0
```

## Задача 2
Заполнить экран терминала случайными падающими цифрами сверху (эффект матрицы), как в анимации (цвет можно использовать стандартный).

![screen-gif](https://i.gifer.com/NvL.gif "Matrix")