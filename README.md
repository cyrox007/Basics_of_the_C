# Задание 2
Написать консольное приложение, которое пересчитает стоимость затраченной электроэнергии в зависимости от использования в различное время дня (с 00:00 по 08:00 - 1 доллар за 1 килловат, с 08:00 по 16:00 - 2 доллара за килловат, с 16:00 по 00:00 - 3 доллара за килловат), время можно рассматривать как граничное время в часах в 24х часовом формате. 
Например:
``` console
./calculate.bin
Enter used power: 30
Enter finished time (hours): 5
----
Total price: 30
```

``` console
./calculate.bin
Enter used power: 30
Enter finished time (hours): 12
----
Total price: 60
```

``` console
./calculate.bin
Enter used power: 30
Enter finished time (hours): 19
----
Total price: 90
```

``` console
./calculate.bin
Enter used power: 30
Enter finished time (hours): 24
----
Total price: 90
```