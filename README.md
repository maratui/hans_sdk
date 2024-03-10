# hans_sdk

Задание на вакансию инженер-программист С++ робототехнических систем. \
Разработать клиент (можно без GUI) для подключения к роботу в симуляции через C++ SDK:
- Установить виртуальный образ и запустить симуляцию, выбрать робота
- Используя C++ SDK разработать клиент с функционалом:
    - Подключение к роботу;
    - Получение текущего статуса робота.

### Выполнение задания

- На VirtualBox создаем интерфейс `host-only network` \
!["images/host_network_manager"](images/host_network_manager.png)

- Добавляем в VirtualBox виртуальный образ `HR_SDK.vbox` \
!["images/hr_sdk_vbox"](images/hr_sdk_vbox.png)

- В свойствах `Network` выбираем `Host-only Adapter` \
!["images/network"](images/network.png)

- Запускаем виртуальную машину \
!["images/hr_sdk_runnig"](images/hr_sdk_running.png)

- Задаем статичные настройки `ip` и `gw` \
!["images/netplan_yaml"](images/netplan_yaml.png) \
!["images/netplan_apply"](images/netplan_apply.png)

- Проверяем соединение и копируем динамическую библиотеку в `/usr/lib/` \
!["images/ping"](images/ping.png)

- Клиент разработан на языке С++ \
Код программы находится в папке src \
При написании кода придерживался Google Style